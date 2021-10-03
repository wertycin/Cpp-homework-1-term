#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class User
{
public:
	User(int num = 0, int scores = 0, const std::vector <std::string>& arr = {}) :
		level(num), basketball_scores(scores), team(arr)
	{}
	void lvl_up();
	void lvl_up(int n);
	void basketball_scores_up();
	void add_teammates(const std::string& mate);
	void add_teammates(const std::vector <std::string>& friends);
	void print() const;

private:
	int level;
	int basketball_scores;
	std::vector <std::string> team;
};


class Energy
{
public:
	Energy(double value, std::string flag) : value(value), flag(flag)
	{}
	Energy()
	{}

	const std::vector <double> convertation()
	{
		flag == "j" ? value_j = value, value_erg = value * pow(10, 7),
			value_ev = (value * pow(10, 19))/(1,6) : flag == "erg" ? value_j = value * pow(10, -7),
			value_erg = value, value_ev = (value * pow(10, 12))/(1,6) : value_j = value * (1,6) * pow(10, -19),
			value_erg = value * (1,6) * pow(10, -12), value_ev = value;

		return { value_j, value_erg, value_ev };
	}

	double value, value_j, value_erg, value_ev;
	std::string flag;
};



int num1();
int num2();
//int num3();
//int num4();
