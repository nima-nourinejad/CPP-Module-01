#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
  // std::cout << "HumanB created" << std::endl;
}
HumanB::~HumanB() {
  // std::cout << "HumanB destroyed" << std::endl;
}
void HumanB::attack(void) const {
  if (_weapon) {
    std::cout << _name << " attacks with their " << _weapon->getType()
              << std::endl;
  } else {
    std::cout << _name << " has no weapon" << std::endl;
  }
}
void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }