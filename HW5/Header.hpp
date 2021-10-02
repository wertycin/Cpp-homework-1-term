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
	void print();

private:
	int level;
	int basketball_scores;
	std::vector <std::string> team;
};

int num1();
//int num2();
//int num3();
//int num4();
