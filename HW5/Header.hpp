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
	Energy()
	{}
	
	void set_joules(double value_j)
	{
		value = value_j;
	}

	void set_erges(double value_erg)
	{
		value = value_erg/j_erg;
	}

	void set_electron_volts(double value_ev)
	{
		value = value_ev/j_ev;
	}

	double get_joules()
	{
		return value;
	}

	double get_erges()
	{
		return value*j_erg;
	}

	double get_electron_volts()
	{
		return value*j_ev;
	}

private:
	double value;
	static inline const double j_erg = 10e7;
	static inline const double j_ev = 10e19 / (1, 6);
};



int num1();
int num2();
int num3();
//int num4();
