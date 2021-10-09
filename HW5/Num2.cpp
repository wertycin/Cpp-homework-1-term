#include "Header.hpp"

int num2()
{
	Energy energy;
	std::string system;
	double num;


	std::cout << "Enter your Energy value. If it's Joules, print j after value; " 
		"ergs - print erg; electron-volts - print ev\n";
	std::cin >> num; 
	std::cin >> system;


	if (system == "j")
	{
		energy.set_joules(num);
	}
	else if (system == "erg")
	{
		energy.set_erges(num);
	}
	else if (system == "ev")
	{
		energy.set_electron_volts(num);
	}
	else
	{
		std::cerr << "Wrong system";
		return -1;
	}
	
	std::cout << "Your answer in Joules, erges, electron-volts:\n" <<
		energy.get_joules() << ' ' << energy.get_erges() << ' ' <<
		energy.get_electron_volts();


	return 0;
}
