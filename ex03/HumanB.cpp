#include "HumanB.hpp"

HumanB::HumanB( std::string const & name) : weapon(nullptr), name(name) {}

void HumanB::setWeapon( Weapon &weap ) {
	this->weapon = &weap;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << (this->weapon == nullptr ? "fist" : this->weapon->getType()) << std::endl;
}
