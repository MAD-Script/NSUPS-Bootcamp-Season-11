#include <iostream>

using namespace std;

int main()
{
    int count;
    int sum;
    int A,B,C;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        sum = 0;
        cin >> A >> B >> C;
        sum = A+B+C;
        if (sum == 180 && A!=0 && B!=0 && C!= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}