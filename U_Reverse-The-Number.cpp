#include <iostream>

using namespace std;
int main()
{
    int count;
    int num;
    int revNum;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        revNum = 0;
        cin >> num;
        while (num > 0)
        {
            revNum = revNum * 10 + num % 10;
            num /= 10;
        }
        cout << revNum << endl;
    }

    return 0;
}