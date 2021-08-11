#include "HumanB.hpp"

HumanB::HumanB( std::string const & name) : name(name) {
	this->weapon = NULL;
}

void HumanB::setWeapon( Weapon &weap ) {
	this->weapon = &weap;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
