#include <iostream>
#include <fstream>

void createEntry(){
  std::ofstream newFile;
  newFile.open("index.js");
  newFile << "require(\"babel-core/register\");\n";
  newFile << "var program = require(\"./run\");\n";
  newFile << "program.default()\n";
  newFile.close();
  newFile.open("run.js");
  newFile << "export default function run() {\n";
  newFile << "  /* Start your code here */\n";
  newFile << "  console.log(\"hello es6 modules\")\n";
  newFile << "}\n";
  newFile.close();
  newFile.open(".babelrc");
  newFile << "{\n";
  newFile << "\"presets\": [\"es2015\"]\n";
  newFile << "}\n";
  newFile.close();
}

int main(int argc, char *argv[]){
  system("npm init");
  system("npm i babel-core -S");
  system("npm i babel-preset-es2015 -S");
  createEntry();
  return 0;
}
