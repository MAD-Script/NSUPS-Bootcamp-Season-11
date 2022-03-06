#include <iostream>

using namespace std;
int main(){
    int count;
    int num1;
    int num2;
    int sum ;


    cin >> count;
    
    for (int i = 0; i < count; i++)
    {
        sum = 0;
        cin >> num1 >> num2;
        sum = num1 + num2;

        cout << sum << endl;
    }
    
}