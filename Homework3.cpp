#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int main()
{
	double charge, tenseness, potential;

	const int charge_conversion = 3 * pow(10, 9);

	const double tenseness_conversion = 3.3 * pow(10, -5);

	const double potential_conversion = 1.0 / 300;

	std::cout <<
		"Please enter your values in Coulumbs, Volts per meter and Volts in SI system: ";

	std::cin >> charge >> tenseness >> potential;

	std::cout << "Your answer in SGS system: " << charge * charge_conversion <<
		" F, " << tenseness * tenseness_conversion << " E, " <<
		potential * potential_conversion << " units of potential CGSE.";

}