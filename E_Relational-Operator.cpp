#include <iostream>

using namespace std;
int main(){
    int count = 0;
    int num1;
    int num2;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num1 >> num2 ;
        if (num1 > num2)
        {
            cout << ">" << endl;
        }else if(num1 < num2){
            cout << "<" << endl;
        }else if(num1 == num2){
            cout << "=" << endl;
        }
        
    }
    
    return 0;
} 