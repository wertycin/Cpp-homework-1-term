#include <iostream>
#include <vector>
 
int main()
{
	std::vector <int> array;
	std::size_t n;
	int element;
 
	std::cout << "Enter number of the elements in the array.\n";
	std::cin >> n;
 
 
	for (std::size_t i = 0; i != n; ++i)
	{
		std::cin >> element;
		array.push_back(element);
	}
 
	for (std::size_t i = 0; i != n; ++i)
	{
		for (std::size_t j = i; j != 0 && array[j-1] > array[j] ; --j)
		{
			std::swap(array[j-1], array[j]);
		}
	}
 
	for (std::size_t i = 0; i < n; ++i)
	{
		std::cout << array[i] << ' ';
	}
 
 
	system("pause");
 
	return EXIT_SUCCESS;
 
}
