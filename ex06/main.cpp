#include "Karen.hpp"

enum levels { NOTHING, DEBUG, INFO, WARNING, ERROR };

int main(int ac, char **av) {
	std::string level((ac > 2 || ac < 2) ? "nothing" : av[1]);
	Karen karen;
	switch (level == "DEBUG" ? DEBUG :
	level == "INFO" ? INFO :
	level == "WARNING" ? WARNING :
	level == "ERROR" ? ERROR :
	NOTHING)
	{
		case NOTHING:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
	}
}
