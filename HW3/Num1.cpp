#include <iostream>
 
int Fib(int n)
{
	return (n > 2) ? Fib(n-1) + Fib(n-2): n = 1;
}
int main()
{
	int n;
 
	std::cout << "Please enter your number of Fibbonachi element: ";
	std::cin >> n;
 
	std::cout << Fib(n);
 
	return 0;
}
