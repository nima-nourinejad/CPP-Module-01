#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {
  // std::cout << "HumanA created" << std::endl;
}
HumanA::~HumanA() {
  // std::cout << "HumanA destroyed" << std::endl;
}
void HumanA::attack(void) const {
  std::cout << _name << " attacks with their " << _weapon.getType()
            << std::endl;
}