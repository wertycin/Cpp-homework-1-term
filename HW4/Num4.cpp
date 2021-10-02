#include <iostream>
 
enum class Month
{
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
 
int main()
{
 
	int n;
 
	std::cin >> n;
 
    switch (static_cast <Month> (n))
	{
	case Month::January:
	case Month::March:
	case Month::May:
    case Month::July:
    case Month::August:
    case Month::October:
    case Month::December:
        std::cout << "31 days\n";
        break;
    case Month::April:
    case Month::June:
    case Month::September:
    case Month::November:
        std::cout << "30 days\n";
    case Month::February:
        std::cout << "28 or 29 days\n";
    default:
		break;
	}
 
	return 0;
 
}
