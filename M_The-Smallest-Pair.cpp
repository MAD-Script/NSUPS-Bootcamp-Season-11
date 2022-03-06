#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int count;
    int items;
    int sum;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        sum = 0;
        cin >> items;
        int num[items];

        for (int j = 0; j < items; j++)
            cin >> num[j];

        sort(num, num + items);
        sum = num[0] + num[1];
        cout << sum << endl;
    }

    return 0;
}
