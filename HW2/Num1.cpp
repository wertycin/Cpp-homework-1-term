#include <iostream>
#include <string>
#include <vector>
 
int main()
{
	std::string input;
	std::vector <std::string> output;
	std::string word;
 
	std::getline(std::cin, input);
 
	for (auto i = 0U; i != input.size(); i++)
	{
		if (input[i] != ' ')
		{
			if ((input[i] >= 21 &&
				input[i] <= 47) ||
				(input[i] >= 58 &&
				input[i] <= 63))
			{
				output.push_back(word);
				word = input[i];
			}
			else
			{
				word += input[i];
			}
		}
		else
		{
			output.push_back(word);
			word = "";
		}
	}
	output.push_back(word);
 
	for (auto i = 0U; i != output.size(); i++)
	{
		if (i == output.size() - 1)
		{
			std::cout << output[i];
 
			return 0;
		}
 
		std::cout << output[i] << '\n';
	}
 
	return 0;
}
