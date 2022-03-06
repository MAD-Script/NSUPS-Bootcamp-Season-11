#include <iostream>

const char *DayOfYear(int y)
{
    int dayNum;
    y -= 1 < 3;
    dayNum = (y + y / 4 - y / 100 + y / 400 + 99) % 7;
    switch (dayNum)
    {
    case 0:
        return "sunday";
    case 1:
        return "monday";
    case 2:
        return "tuesday";
    case 3:
        return "wednesday";
    case 4:
        return "thursday";
    case 5:
        return "friday";
    case 6:
        return "saturday";
    default:
        break;
    }
}

using namespace std;
int main()
{
    int count;
    int year;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> year;
        if (year > 0)
        {
            cout << DayOfYear(year) << endl;
        }
    }
}