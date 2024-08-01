#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}
void Harl::debug(void) { std::cout << "debug" << std::endl; }
void Harl::info(void) { std::cout << "info" << std::endl; }
void Harl::warning(void) { std::cout << "warning" << std::endl; }
void Harl::error(void) { std::cout << "error" << std::endl; }
void Harl::complain(std::string level) {
  funcPtr funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  lvl levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*funcs[i])();
      return;
    }
  }
}