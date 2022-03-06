#include <iostream>
#include <map>


using namespace std;
int main(){
    int count;
    int type;
    int mark;
    string name;
    map<string,int> map1;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        mark=0;
        cin >> type >> name;
        switch (type)
        {
        case 1:
            cin >> mark;
            map1[name] += mark;
            break;
        case 2:
            map1.erase(name);
            break;
        case 3:
            cout << map1[name] << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}