#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie {
public:
  Zombie(void);
  Zombie(std::string inputName);
  ~Zombie(void);
  void announce(void);
  void setName(std::string inputName);

private:
  std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP