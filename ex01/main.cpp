#include "Zombie.hpp"

#define HORDE_SIZE 5

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie *horde = zombieHorde( HORDE_SIZE, "Charly" );

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
