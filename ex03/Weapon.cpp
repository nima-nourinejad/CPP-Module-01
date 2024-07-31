#include "Weapon.hpp"

Weapon::Weapon(std::string inputType) : _type(inputType) {
  // std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon() {
  // std::cout << "Weapon destroyed" << std::endl;
}

std::string const &Weapon::getType(void) const { return _type; }
void Weapon::setType(std::string inputType) { _type = inputType; }