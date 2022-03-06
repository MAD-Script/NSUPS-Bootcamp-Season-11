#include <iostream>

using namespace std;

int main()
{
    int count;
    int num;
    long long int fact;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        fact = 1;
        cin >> num;

        for (int j = 1; j <= num; j++) fact *= j;

        cout << fact << endl;
    }

    return 0;
}