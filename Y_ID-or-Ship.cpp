#include <iostream>

using namespace std;

int main()
{
    int count;
    char ID;

    cin >> count;

    for (int i = 0; i < count; i++)
    {

        cin >> ID;
        switch (ID)
        {
        case 'B':
        case 'b':
            cout << "BattleShip" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Cruiser" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Destroyer" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Frigate" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}