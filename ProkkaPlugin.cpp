#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ProkkaPlugin.h"

void ProkkaPlugin::input(std::string file) {
 inputfile = file;
}

void ProkkaPlugin::run() {
   
}

void ProkkaPlugin::output(std::string file) {
	std::string command;
	//spine.pl -f genome_files.txt
   command = "prokka "+inputfile;
   command += " --outdir "+std::string(PluginManager::prefix())+" --force --prefix "+file.substr(file.find_last_of('/')+1);
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<ProkkaPlugin> ProkkaPluginProxy = PluginProxy<ProkkaPlugin>("Prokka", PluginManager::getInstance());
