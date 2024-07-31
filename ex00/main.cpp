#include "Zombie.hpp"

int main() {
  Zombie *zombie_newZobie = newZombie("zombie_newZobie");
  randomChump("zombie_randomChump");
  delete zombie_newZobie;
  return 0;
}