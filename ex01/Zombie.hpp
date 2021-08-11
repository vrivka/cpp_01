#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	void announce();

	void setName( std::string );
	Zombie();
	Zombie( std::string );
	~Zombie();
};


#endif
