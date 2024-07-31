#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	std::stringstream stringstream;
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		stringstream.str("");
		stringstream << name << "_" << (i + 1);
		zombies[i].setName(stringstream.str());
	}
	return zombies;
}