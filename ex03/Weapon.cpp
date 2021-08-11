#include "Weapon.hpp"

std::string const & Weapon::getType() { return type; }

void Weapon::setType( std::string const & typeofWeapon ) {
	this->type = typeofWeapon;
}

Weapon::Weapon( std::string const & type) : type(type) {}
