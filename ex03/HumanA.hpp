#ifndef HUMANA_HPP
#define HUMANA_HPP


#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack (void) const;

	private:
	std::string const _name;
	Weapon &_weapon;
};

#endif //HUMANA_HPP