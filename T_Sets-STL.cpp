#include <iostream>
#include <set>

using namespace std;

int main()
{
    int count;
    set<int> set1;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int inp1, inp2;
        cin >> inp1 >> inp2;
        switch (inp1)
        {
            case 1:
                set1.insert(inp2);
                break;
            case 2:
                set1.erase(inp2);
                break;
            case 3:
                (set1.find(inp2) != set1.end()) ? cout << "Yes" << endl : cout << "No" << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}