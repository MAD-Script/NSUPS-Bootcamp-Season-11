#include <iostream>

using namespace std;
int main()
{
    long long int num1;
    long long int num2;
    long long int cont;

    cin >> num1 >> num2;
    cont = (num2 * num2 - num1 * num1) / (2 * num2 - 2 * num1);

    if (abs(num1 - cont) == abs(num2 - cont))
        cout << cont << endl;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}