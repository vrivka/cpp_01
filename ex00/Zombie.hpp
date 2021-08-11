#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	void announce();
	Zombie( std::string );
	~Zombie();
};


#endif