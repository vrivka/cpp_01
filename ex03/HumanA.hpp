#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	Weapon &weapon;
	std::string const name;
public:
	HumanA( std::string const &, Weapon & );
	void attack();
};

#endif
