#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	Weapon *weapon;
	std::string name;
public:
	void setWeapon( Weapon & );
	void attack();
	HumanB( std::string const & );
};

#endif
