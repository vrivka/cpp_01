#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	Zombie *john = newZombie("John");
	Zombie *michael = newZombie("Michael");

	john->announce();
	randomChump( "Tony" );
	delete john;
	randomChump( "Jim" );
	michael->announce();
	delete michael;
	return 0;
}
