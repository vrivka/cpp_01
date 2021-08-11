#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	Weapon *weapon;
	std::string const name;
public:
	HumanB( std::string const &);
	void setWeapon( Weapon & );
	void attack();
};

#endif