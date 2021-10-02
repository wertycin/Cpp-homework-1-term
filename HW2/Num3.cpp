#include <iostream>
#include <vector>
 
int main()
{
	std::vector <int> array;
	int n, element, key, midd = 0, left = 0, right;
 
	std::cout << "Enter number of elements in your array. \n";
	std::cin >> n;
 
	std::cout << "Enter your array. \n";
 
	for (std::size_t i = 0; i != n; ++i)
	{
		std::cin >> element;
		array.push_back(element);
	}
 
	right = n-1;
 
	std::cout << "Enter your key. \n";
	std::cin >> key;
 
	while (1)
	{
		if (left > right)
		{
			std::cout << "There is no key in array.";
			break;
		}
 
		midd = (left + right) / 2;
 
		if (key < array[midd]) 
		{      
			right = midd - 1;     
		}
		else if (key > array[midd]) 
		{ 
			left = midd + 1;    
		}
		else 
		{        
			std::cout << "Your key is found in array.";
			break;
		}
	}
 
	return 0;
}
