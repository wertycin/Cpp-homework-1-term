#include <iostream>;
#include <vector>;
 
 
void merge( std::vector <int> &array, int left, int right)
{
	int mid = (right + left) / 2, 
		i = left, j = mid + 1, k = 0;
 
	std::vector <int> temp_array(array.size());
 
	while (i <= mid && j <= right) 
	{
		temp_array[k++] = (array[i] <= array[j]) ? array[i++] : array[j++];
	}
 
	while (i <= mid) 
	{
		temp_array[k++] = array[i++];
	}
 
	while (j <= right) 
	{
		temp_array[k++] = array[j++];
	}
 
	for (auto i = 0; i < k; ++i)
	{
		array[i + left] = temp_array[i];
	}
}
 
void merge_sort(std::vector <int> &array, int left, int right)
{
	if (left < right)
		if (right - left == 1) 
		{
			if (array[right] < array[left]) 
			{
				std::swap(array[left], array[right]);
			}
		}
		else 
		{
			merge_sort(array, left, (right + left) / 2);
			merge_sort(array, ((right + left) / 2) + 1, right);
			merge(array, left, right);
		}
 
}
 
 
int main()
{
	int n, element;
 
	std::cout << "Enter number of elements in the array: ";
	std::cin >> n;
 
	std::vector <int> array(n);
 
	for (auto i = 0; i < n; ++i)
	{
		std::cin >> array[i];
	}
 
	std::cout << "Initial array: ";
 
	for (int element : array)
	{
		std::cout << element << ' ';
	}
 
	merge_sort(array, 0, n - 1);
 
	std::cout << "\nSorted array: ";
 
	for (int element : array)
	{
		std::cout << element << ' ';
	}
 
 
	return 0;
}
