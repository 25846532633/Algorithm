#include <iostream>
using namespace std;
int Day[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};
int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}


int main() {
    int m = 0;
    int mon = 0, year = 0, day = 0;
    int addDay = 0;
    cin >> m;
    while (m--)
    {
        cin >> mon >> year >> day >> addDay;
        while (addDay > 0)
        {
            if (Day[leap(year)][mon] < addDay)
            {
                addDay -= Day[leap(year)][mon] + day;
                mon += 1;
            }
            else {
                break;
            }
            if (mon == 13)
                year += 1;
        }
        printf("%4d-%2d-%2d", year, mon, day);
    }
}