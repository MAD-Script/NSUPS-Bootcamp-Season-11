#include <iostream>

using namespace std;

int main()
{
    int count;
    int sum;
    string num;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        sum = 0;
        cin >> num;
        sum = (num[0]-'0')+(num[num.length()-1]-'0');
        cout << sum << endl;
    }

    return 0;
}