#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int count;
    int flag = 0;

    cin >> count;
    int num[count];
    int sortedNum[count];

    for (int i = 0; i < count; i++){
        cin >> num[i];
        sortedNum[i] = num[i];
    }

    sort(sortedNum,sortedNum + count);
    
    for (int i = 0; i < count; i++)
    {
        if (sortedNum[i] != num[i])flag++;
        
    }

    if (flag <= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}