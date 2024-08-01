#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Provide three inputs in the following order: a filename and "
                 "two strings."
              << std::endl;
    return 1;
  }
  std::string fileName = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];
  if (fileName.empty() || s1.empty()) {
    std::cerr << "File Name and S1 can not be empty." << std::endl;
    return 1;
  }
  std::ifstream file(fileName.c_str());
  if (!file.is_open()) {
    std::cerr << "File does not exist or cannot be opened." << std::endl;
    return 1;
  }
  std::stringstream read;
  read << file.rdbuf();
  file.close();
  std::string content = read.str();
  std::stringstream result;
  std::string::size_type start = 0;
  std::string::size_type find = 0;
  while (true) {
    find = content.find(s1, start);
    if (find == std::string::npos) {
      result << content.substr(start);
      break;
    }
    result << content.substr(start, find - start) << s2;
    start = find + std::string(s2).length();
  }
  std::stringstream replaceName;
  replaceName << fileName << ".replace";
  std::ofstream replaceFile(replaceName.str().c_str());
  if (!replaceFile.is_open()) {
    std::cerr << "Could not create the replace file." << std::endl;
    return 1;
  }
  replaceFile << result.str();
  replaceFile.close();
  return 0;
}