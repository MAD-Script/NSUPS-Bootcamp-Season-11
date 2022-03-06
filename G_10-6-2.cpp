#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    int count;
    double length;
    double width;
    double radius;
    double rectArea;
    double cricArea;

    cin >> count;
    
    for (int i = 0; i < count; i++)
    {
        cin >> length;
        width = length * (3.0/5.0);
        radius = length * (1.0/5.0);
        
        cricArea = acos(-1) * radius * radius;
        rectArea = (length * width) - cricArea;

        cout << fixed << setprecision(2) <<  cricArea <<" " <<rectArea  << endl;
    }
    
}