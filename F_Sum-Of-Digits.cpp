#include <iostream>

using namespace std;
int main(){
    int count =0;
    int sum;
    string num;


    cin >> count;
    for (int i = 0; i < count; i++)
    {
        sum = 0;
        cin >> num;
        for (int j = 0; j < num.length(); j++)
            sum += num.at(j) - '0';
        
        cout << sum << endl;
    }
    

    return 0;
}