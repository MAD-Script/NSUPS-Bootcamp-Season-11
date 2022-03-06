#include <iostream>

using namespace std;
long int GCD(long int A, long int B)
{
    if (B == 0)
        return A;
    else
        return GCD(B, A % B);
}
long int LCM(long int A, long int B) { return (A) / GCD(A, B) * B; }

int main()
{

    int count = 0;
    long int num1;
    long int num2;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num1 >> num2;
        cout << GCD(num1, num2) << " " << LCM(num1, num2) << endl;
    }
    return 0;
}