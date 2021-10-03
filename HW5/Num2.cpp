#include "Header.hpp"

int num2()
{
	Energy energy;
	std::vector <double> answer;

	std::cout << "Enter your Energy value. If it's Joule, print j after value;" 
		"erg - print erg; electron - volt - print e-v\n";
	std::cin >> energy.value;
	std::cin >> energy.flag;

	answer = energy.convertation();
	
	std::cout << "Your answer in Joules, erges, electron-volts: ";

	for (double el : answer)
	{
		std::cout << el << ' ';
	}

	return 0;
}
