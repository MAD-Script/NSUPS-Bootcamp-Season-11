#include <iostream>

using namespace std;
int main()
{
    int count;
    long long int A;
    long long int B;
    long long int C;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> A >> B >> C;
        if (A > 0 && B > 0 && C > 0)
        {
            if (A + B > C && B + C > A && A + C > B)
            {
                if (A == B && B == C && C == A)
                {
                    cout << "Case " << i + 1 << ": Equilateral" << endl;
                }
                else if (A != B & B != C & C != A)
                {
                    cout << "Case " << i + 1 << ": Scalene" << endl;
                }
                else
                {
                    cout << "Case " << i + 1 << ": Isosceles" << endl;
                }
            }
            else
                cout << "Case " << i + 1 << ": Invalid" << endl;
        }
        else
            cout << "Case " << i + 1 << ": Invalid" << endl;
    }
}