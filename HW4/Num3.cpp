#include <iostream>
#include <iomanip>
 
struct Exact_Time
{
    Exact_Time(int y = 2021, int m = 1, int d = 1, int h =0, int min = 0, int s = 0, int ms = 0) :
        year(y), month(m), day(d), hour(h), minute(min), second(s), millisecond(ms)
    {}
    unsigned int year : 11, month : 4, day : 5, hour : 5, minute : 6, second : 6, millisecond : 10;
};
 
int main()
{
    Exact_Time date_and_time = {2018, 7, 14, 19, 32, 15, 44};
 
    std::cout << date_and_time.year << ':' << std::setw(2) << std::setfill('0') << date_and_time.month <<
        ':' << std::setw(2) << std::setfill('0') << date_and_time.day << ' ' << std::setw(2) <<
        std::setfill('0') << date_and_time.hour << ':' << std::setw(2) << std::setfill('0') <<
        date_and_time.minute << ':' << std::setw(2) << std::setfill('0') << date_and_time.second <<
        '.' << std::setw(3) << std::setfill('0') << date_and_time.millisecond;
 
    return 0;
}
