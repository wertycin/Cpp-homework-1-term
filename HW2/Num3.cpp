#include <iostream>
#include <vector>
 
int main()
{
	std::vector <int> array;
	int n, element, key, midd = 0, left = 0, right;
	bool flag = false;
 
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
 
	while (left <= right && flag == false)
	{
		midd = (left + right) / 2;
 
		if (key < array[midd]) 
		{      
			right = midd - 1;     
		}
		else 
		{ 
			left = midd + 1;
		}
		if (key == array[midd])
		{        
			flag = true;
		}
	}
 
	if (flag == true)
	{
		std::cout << "Your key is found in the array.";
	}
 
	else
	{
		std::cout << "There is no key in the array.";
	}
 
	return 0;
}
