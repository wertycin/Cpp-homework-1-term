#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
	int n, element;
	std::vector <int> array, array_acsending, array_decsending;
 
	std::cout << "Enter the number of elements in the array: ";
	std::cin >> n;
 
	std::cout << "Enter the array that will be sorted: \n";
 
	for (auto i = 0; i < n; ++i)
	{
		std::cin >> element;
		array.push_back(element);
	}
	std::cout << "\n\n";
	array_acsending = array;
	std::sort(std::begin(array_acsending), std::end(array_acsending));
	for (int i : array_acsending)
	{
		std::cout << i << '\n';
	}
	std::cout << "\n\n";
 
	array_decsending = array;
	std::sort(std::begin(array_decsending), std::end(array_decsending),
		[](int x, int y) {return x > y; });
 
	for (int i : array_decsending)
	{
		std::cout << i << '\n';
	}
 
	return 0;
}
