#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int count;
    int sum = 0;

    cin >> count;
    int num[count];


    for (int i = 0; i < count; i++)
        cin >> num[i];
    
    for (int i = 0; i < count; i++)
        sum += num[i];
    
    cout << sum << endl;

    return 0;
}