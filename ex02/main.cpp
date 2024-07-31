#include <iostream>
#include <string>

int main(void) {
  std::string stringVAR = "HI THIS IS BRAIN";
  std::string *stringPTR = &stringVAR;
  std::string &stringREF = stringVAR;

  std::cout << "Memory address:" << std::endl;
  std::cout << "stringVAR: " << &stringVAR << std::endl;
  std::cout << "stringPTR: " << stringPTR << std::endl;
  std::cout << "stringREF: " << &stringREF << std::endl;

  std::cout << "Value:" << std::endl;
  std::cout << "stringVAR: " << stringVAR << std::endl;
  std::cout << "stringPTR: " << *stringPTR << std::endl;
  std::cout << "stringREF: " << stringREF << std::endl;

  return 0;
}