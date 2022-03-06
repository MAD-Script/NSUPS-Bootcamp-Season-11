#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main()
{   
    int num;
    map<int,int> reduced;
    vector<int> item;

    while(cin>>num){
        if (reduced.find(num) != reduced.end())
            reduced[num]++;
        else {
            reduced[num] =1;
            item.push_back(num);
        }
    }
    for (int i = 0; i < item.size(); i++)
    {
        cout << item[i] << " " << reduced[item[i]] << endl;
    }
    
}