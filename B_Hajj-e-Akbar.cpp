#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    int count = 1;
    string input = " ";

    while (1)
    {
        cin >> input;
        if (input.at(0) == '*')
            break;

        if (input.compare("Hajj") == 0)
        {
            cout << "Case " << count << ": Hajj-e-Akbar" << endl;
        }
        else if (input.compare("Umrah") == 0)
        {
            cout << "Case " << count << ": Hajj-e-Asghar" << endl;
        }
        count++;
    }

    return 0;
}
