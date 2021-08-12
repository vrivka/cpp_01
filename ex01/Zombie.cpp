#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string const &name ) {
	this->name = name;
}

Zombie::Zombie() {
	this->name = "Random name";
}

Zombie::~Zombie() {
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "UAAAAAGHTTT... (x _ x)" << std::endl;
}
