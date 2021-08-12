#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string const &name ) : name(name) {}

Zombie::~Zombie() {
	std::cout << "<\x1b[32m" << this->name << "\x1b[0m> ";
	std::cout << "UAAAAAGHTTT... (x _ x)" << std::endl;
}
