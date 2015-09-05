<?php

function CSVToArray($fp) {
	$headers = Array();
	$array = Array();
	if(($data = fgetcsv($fp)) !== false) {
		$num = count($data);
		for ($i=0; $i<$num; $i++)
			$headers[$i] = $data[$i];
	}
	
	if((sizeof($headers) == 0) || strpos($headers[0], 'html')) {
		fclose($fp);
		return $array;
	}
	
	$j = 0;
	while(($data = fgetcsv($fp)) !== false) {
		$num = count($data);
		for ($i=0; $i<$num; $i++)
			$array[$j][$headers[$i]] = $data[$i];
		$j++;
	}
	
	fclose($fp);
	return $array;
}

function delTree($dir, $include_dir = true) {
	$files = array_diff(scandir($dir), array('.','..'));

	foreach ($files as $file) {
		is_dir("$dir/$file") ? delTree("$dir/$file") : unlink("$dir/$file");
	}

	if($include_dir) {
		return rmdir($dir);
	}
}

$makefile = fopen("Makefile", "w");

fwrite($makefile, "all: build\n\n");

$items = Array();
$headers = Array();

if(is_dir("Controllers/Generated")) {
	delTree("Controllers/Generated", false);
}
else {
	mkdir("Controllers/Generated");
}

if(is_dir("Plants/Generated")) {
	delTree("Plants/Generated", false);
}
else {
	mkdir("Plants/Generated");
}

if(is_file("Controllers/controllers.csv")) {
	$fp = fopen("Controllers/controllers.csv", "r");

	$data = CSVToArray($fp);

	foreach($data as $controller) {
		$safe_name = str_replace("-", "", $controller["Name"]);

		if(is_file("Controllers/Controller.c") && is_file("Controllers/Controller.h")) {
			$c_contents = file_get_contents("Controllers/Controller.c");

			foreach($controller as $key => $value) {
				$c_contents = str_replace($key, $value, $c_contents);
			}

			$c_contents = str_replace("Controller", $safe_name, $c_contents);

			file_put_contents("Controllers/Generated/" . $safe_name . ".c", $c_contents);

			$h_contents = file_get_contents("Controllers/Controller.h");

			foreach($controller as $key => $value) {
				$h_contents = str_replace($key, $value, $h_contents);
			}

			$h_contents = str_replace("Controller", $safe_name, $h_contents);
			$h_contents = str_replace(strtoupper("Controller"), strtoupper($safe_name), $h_contents);

			file_put_contents("Controllers/Generated/" . $safe_name . ".h", $h_contents);

			$items[] = $safe_name;
			$headers[] = "Controllers/Generated/" . $safe_name . ".h";
			fwrite($makefile, "Objects/" . $safe_name . ": Controllers/Generated/" . $safe_name . ".c Generic/step.h\n");
			fwrite($makefile, "\t@echo Building " . $controller["Name"] . "...\n");
			fwrite($makefile, "\t@gcc -c -O2 -lm -Wall Controllers/Generated/" . $safe_name . ".c -o Objects/" . $safe_name . "\n");
			fwrite($makefile, "\n");
		}
		else {
			echo "Warning: Unable to find a controller to create!!!!\n";
		}
	}	
}

if(is_file("Plants/plants.csv")) {
	$fp = fopen("Plants/plants.csv", "r");

	$data = CSVToArray($fp);

	foreach($data as $plant) {
		$safe_name = str_replace("-", "", $plant["Name"]);

		if(is_file("Plants/Plant.c") && is_file("Plants/Plant.h")) {
			$c_contents = file_get_contents("Plants/Plant.c");

			foreach($plant as $key => $value) {
				$c_contents = str_replace($key, $value, $c_contents);
			}

			$c_contents = str_replace("Plant", $safe_name, $c_contents);

			file_put_contents("Plants/Generated/" . $safe_name . ".c", $c_contents);

			$h_contents = file_get_contents("Plants/Plant.h");

			foreach($plant as $key => $value) {
				$h_contents = str_replace($key, $value, $h_contents);
			}

			$h_contents = str_replace("Plant", $safe_name, $h_contents);
			$h_contents = str_replace(strtoupper("Plant"), strtoupper($safe_name), $h_contents);

			file_put_contents("Plants/Generated/" . $safe_name . ".h", $h_contents);

			$items[] = $safe_name;
			$headers[] = "Plants/Generated/" . $safe_name . ".h";
			fwrite($makefile, "Objects/" . $safe_name . ": Plants/Generated/" . $safe_name . ".c Generic/step.h\n");
			fwrite($makefile, "\t@echo Building " . $plant["Name"] . "...\n");
			fwrite($makefile, "\t@gcc -c -O2 -lm -Wall Plants/Generated/" . $safe_name . ".c -o Objects/" . $safe_name . "\n");
			fwrite($makefile, "\n");
		}
		else {
			echo "Warning: Unable to find a plant to create!!!!\n";
		}
	}	
}

$runnable = fopen("runnable.c", "w");

fwrite($runnable, "#include <stdint.h>\n");
fwrite($runnable, "#include <stdlib.h>\n");
fwrite($runnable, "#include <stdio.h>\n");
fwrite($runnable, "#include <string.h>\n");
fwrite($runnable, "#include <sys/time.h>\n");
fwrite($runnable, "\n");
fwrite($runnable, "#include \"Generic/step.h\"\n");
foreach($headers as $header) {
	fwrite($runnable, "#include \"" . $header . "\"\n");	
}
fwrite($runnable, "\n");

foreach($items as $item) {
	fwrite($runnable, "" . $item . " " . $item . "_data;\n");
}
fwrite($runnable, "\n");

fwrite($runnable, "int main(void) {\n");
foreach($items as $item) {
	fwrite($runnable, "\t(void) memset((void *)&" . $item . "_data, 0, sizeof(" . $item . "));\n");
	fwrite($runnable, "\t" . $item . "Init(&" . $item . "_data);\n");
	fwrite($runnable, "\n");
}

fwrite($runnable, "\tFILE* fo = fopen(\"out.csv\", \"w\");\n");
fwrite($runnable, "\n");

fwrite($runnable, "\tstruct timeval t0, t1;\n");
fwrite($runnable, "\tgettimeofday(&t0, 0);\n");
fwrite($runnable, "\n");

fwrite($runnable, "\tunsigned int i = 0;\n");
fwrite($runnable, "\tfor(i=0; i < (SIMULATION_TIME / STEP_SIZE); i++) {\n");
fwrite($runnable, "\t\t//fprintf(stdout, \"Time: %fms\\n\", i*STEP_SIZE);\n");
fwrite($runnable, "\t\t//fflush(stdout);\n");

/*if(is_file("custom_code.c")) {
	fwrite($runnable, "\n");
	fwrite($runnable, trim(file_get_contents("custom_code.c")));
	fwrite($runnable, "\n");
}*/

for($i=0; $i<30; $i++) {
	fwrite($runnable, "\n");
	fwrite($runnable, "Plant1_data.control = Controller1_data.control;\n");
	fwrite($runnable, "Controller1_data.x = Plant1_data.x;\n");
	fwrite($runnable, "\n");
}

foreach($items as $item) {
	fwrite($runnable, "\n");
	fwrite($runnable, "\t\t" . $item . "Run(&" . $item . "_data);\n");
}

fwrite($runnable, "\t}\n");
fwrite($runnable, "\n");

fwrite($runnable, "\tgettimeofday(&t1, 0);\n");
fwrite($runnable, "\tlong elapsed = (t1.tv_sec-t0.tv_sec)*1000000 + t1.tv_usec-t0.tv_usec;\n");
fwrite($runnable, "\n");
fwrite($runnable, "\tprintf(\"Time taken: %ld microseconds (%.3f seconds)\\n\", elapsed, (elapsed / 1000000.0));\n");
fwrite($runnable, "\n");

fwrite($runnable, "\tfclose(fo);\n");
fwrite($runnable, "\n");

fwrite($runnable, "\treturn 0;\n");
fwrite($runnable, "}\n");

fclose($runnable);

fwrite($makefile, "runnable: runnable.c Generic/step.h\n");
fwrite($makefile, "\t@echo Building Runnable...\n");
fwrite($makefile, "\t@gcc -O2 -lm -Wall runnable.c ");
foreach($items as $item) {
	fwrite($makefile, "Objects/" . $item . " ");
}
fwrite($makefile, "-o runnable\n");
fwrite($makefile, "\n");

fwrite($makefile, "build: ");
foreach($items as $item) {
	fwrite($makefile, "Objects/" . $item . " ");
}
fwrite($makefile, "runnable");
fwrite($makefile, "\n\n");

fwrite($makefile, "clean:\n");
fwrite($makefile, "\t@echo Removing compiled binaries...\n");
foreach($items as $item) {
	fwrite($makefile, "\t@rm -r Objects/" . $item . "\n");
}
fwrite($makefile, "\t@rm -r runnable\n");
fwrite($makefile, "\n");

fclose($makefile);

?>