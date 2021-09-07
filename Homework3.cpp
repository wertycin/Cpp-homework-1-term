#include <iostream>
#include <iomanip>
//#include <cmath>
#include <limits>

int main()
{
	double a, b, c, D, x1, x2;
	const double epsilon =
		std::numeric_limits < double > ::epsilon();


	std::cout << "Enter coefficients 'a', 'b', 'c' with space: ";
	
	std::cin >> a >> b >> c;

	if (abs(a) > epsilon)
	{

		D = (pow(b, 2) - 4 * a * c);

		if (D > epsilon)
		{
			x1 = (-b + pow(D, 0.5)) / (2 * a);
			x2 = (-b - pow(D, 0.5)) / (2 * a);
			std::cout << "Your solutions are: " << 
				std::setprecision(3) << std::fixed << x1 << " and " << x2 << '.';
		}
		else if (abs(D) < epsilon)
		{
			x1 = (-b) / (2 * a);
			std::cout << "Your solution is: " << 
				std::setprecision(3) << std::fixed << x1;
		}
		else if (D < -epsilon)
		{
			std::cout << "Solution doesn't exist.";
		}
	}
	else if (abs(b) > epsilon)
	{
		x1 = -c / b;
		std::cout << "Your solution is: " <<
			std::setprecision(3) << std::fixed << x1;

	}
	
	else if (abs(c) > epsilon)
	{
		std::cout << "Solution doesn't exist.";
	}

	else
	{
		std::cout << "Any x suits as a solution.";
	}
	
	return 0;

}
