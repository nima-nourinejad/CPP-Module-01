#include <fstream>
#include <iostream>
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
  std::ofstream logFile(fileName, std::ios::app);
}