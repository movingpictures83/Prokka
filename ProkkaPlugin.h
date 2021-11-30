#ifndef PROKKAPLUGIN_H
#define PROKKAPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ProkkaPlugin : public Plugin
{
public: 
 std::string toString() {return "Prokka";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
