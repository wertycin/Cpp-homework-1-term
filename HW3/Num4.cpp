#include <iostream>
#include <vector>
#include <functional>
#include <cmath>
 
void calculate(std::function <double(double, double)> lambda, 
	double x, double y)
{
	std::cout << lambda(x, y) << '\n';
}
 
int main()
{
	double x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "\nEnter y: ";
	std::cin >> y;
	std::cout << '\n';
 
	std::vector < std::function <double(double, double)> > array =
	{
		 [](double x, double y) { return x + y; },
		 [](double x, double y) { return x * y; },
		 [](double x, double y) { return (x > 0) ? pow(x, y) : -1.0; }
 
	};
 
	for (std::function <double(double, double)> element : array)
	{
		calculate(element, x, y);
	}
 
	return 0;
}
