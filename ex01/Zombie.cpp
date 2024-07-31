#include "Zombie.hpp"

Zombie::Zombie(void): name("") {};
Zombie::Zombie(std::string inputName) : name(inputName) {}
Zombie::~Zombie(void) { std::cout << name << " is destryed" << std::endl; }
void Zombie::announce(void) {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string inputName) {
  name = inputName;
}
