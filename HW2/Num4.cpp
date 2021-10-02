#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
 
std::string LCS_DYN(std::string str_1, std::string str_2)
{
	int X = str_1.size(), Y = str_2.size();
 
	std::string LCS;
	std::vector<std::vector<int>> matrix(str_1.size() + 1, std::vector <int>(str_2.size() + 1, 0));
 
	for (auto i = 0U; i < str_1.size(); ++i)
	{
		for (auto j = 0U; j < str_2.size(); ++j)
		{
			if (str_1[i] == str_2[j])
			{
				matrix[i + 1][j + 1] = matrix[i][j] + 1;
			}
			else
			{
				matrix[i + 1][j + 1] = std::fmax(matrix[i][j + 1], matrix[i + 1][j]);
			}
 
		}
	}
	while (X > 0 && Y > 0)
	{
		if (str_1[X - 1] == str_2[Y - 1])
		{
			LCS.push_back(str_1[X - 1]);
			X = X - 1;
			Y = Y - 1;
		}
		else if (matrix[X - 1][Y] > matrix[X][Y - 1])
		{
			X -= 1;
		}
		else
		{
			Y -= 1;
		}
	}
 
	std::reverse(LCS.begin(), LCS.end());
	return LCS;
}
 
 
 
int main()
{
	std::string str_1, str_2, ans;
 
	std::cin >> str_1;
	std::cin >> str_2;
 
	ans = LCS_DYN(str_1, str_2);
 
	std::cout << "Your answer is " << ans;
 
 
	return 0;
}
