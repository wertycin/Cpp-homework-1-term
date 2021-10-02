#include "Header.hpp"


void User::lvl_up()
{
	++level;
}

void User::lvl_up(int num)
{
	level += num;
}

void User::basketball_scores_up()
{
	int goals = rand() % (3 * level);
	basketball_scores += goals;
}

void User::add_teammates(const std::string& mate)
{
	team.push_back(mate);
}

void User::add_teammates(const std::vector <std::string>& friends)
{
	for (auto i = 0U; i < friends.size(); i++)
	{
		team.push_back(friends[i]);
	}
}

void User::print()
{
	std::cout << "level: " << level << ", " << "basketball_scores: " <<
		basketball_scores << ", team: ";
	for (auto i = 0U; i < team.size(); i++)
	{
		(i != team.size() - 1) ? std::cout << team[i] << ", " : std::cout << team[i] << ".";
	}
}

int num1()
{
	int lvls = rand() % 30;

	User Egor_Gusev(33, 2000);

	Egor_Gusev.lvl_up(lvls);

	Egor_Gusev.basketball_scores_up();

	Egor_Gusev.add_teammates(std::vector <std::string> {"Jigan", "Jigit"});

	Egor_Gusev.add_teammates("husos");

	Egor_Gusev.print();

	return 0;
}
