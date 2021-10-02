#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <cmath>
 
struct User
{	
	User(int num = 0, int scores = 0, const std::vector <std::string>& arr = {}) :
		level(num), basketball_scores(scores), team(arr)
	{}
 
	~User()
	{
		std::cout << "\nEgor_Gusev is destroyed.\n";
	}
 
	void lvl_up()
	{
		++level;
	}
 
	void lvl_up(int num)
	{
		level += num;
	}
 
 
	void basketball_scores_up()
	{
		srand(time(NULL));
		int goals = rand() % (3 * level);
		basketball_scores += goals;
	}
 
	void add_teammates(const std::string& mate)
	{
		team.push_back(mate);
		// Почему-то при назывании переменной friend компилятор ругается.
	}
 
	void add_teammates(const std::vector <std::string>& friends)
	{
		for (auto i = 0U; i < friends.size(); i++)
		{
			team.push_back(friends[i]);
		}
	}
 
	void print()
	{
		std::cout << "level: " << level << ", " << "basketball_scores: " << 
			basketball_scores << ", team: ";
		for (auto i = 0U; i < team.size(); i++)
		{ 
			(i != team.size() - 1) ? std::cout << team[i] << ", " : std::cout << team[i] << ".";
		}
	}
 
    int level;
	int basketball_scores;
    std::vector <std::string> team;
};
 
int main()
{
	srand(time(NULL));
	int lvls = rand() % 30;
 
	User Egor_Gusev(33, 2000);
 
	Egor_Gusev.lvl_up(lvls);
 
	Egor_Gusev.basketball_scores_up();
 
	Egor_Gusev.add_teammates(std::vector <std::string> {"Jigan", "Jigit"});
 
	Egor_Gusev.add_teammates("husos");
 
	Egor_Gusev.print();
 
	return 0;
}
