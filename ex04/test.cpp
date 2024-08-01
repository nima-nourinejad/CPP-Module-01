#include <fstream>
#include <string>

int main(void) {
  std::string fileName = "test.txt";
  std::string content = "ABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEF"
                        "ABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEF"
                        "ABCDEFABCDEFABCDEFABCDEFABCDEFABCDEFABCDEF";
  std::ofstream file(fileName.c_str());
  file << content;
  file.close();
  return 0;
}