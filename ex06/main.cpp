#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr
        << "Input one of the following levels: DEBUG, INFO, WARNING, or ERROR"
        << std::endl;
    return 1;
  }
  Harl harl;
  std::string level = argv[1];
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int index;
  for (index = 0; index < 4; index++) {
    if (level == levels[index])
      break;
  }
  switch (index) {
  case 0:
    harl.complain("DEBUG");
    // fallthrough
  case 1:
    harl.complain("INFO");
    // fallthrough
  case 2:
    harl.complain("WARNING");
    // fallthrough
  case 3:
    harl.complain("ERROR");
    break;
  default:
    std::cout
        << "The level you entered is not one of the following: DEBUG, INFO, "
           "WARNING, or ERROR"
        << std::endl;
  }
  return 0;
}