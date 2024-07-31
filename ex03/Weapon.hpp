#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
public:
  Weapon(std::string inpytType);
  ~Weapon();
  std::string const &getType(void) const;
  void setType(std::string inputType);

private:
  std::string _type;
};
#endif // WEAPON_HPP