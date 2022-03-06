#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;
int main()
{
    string word;
    map<string, int> dictionary;
    vector<string> item;

    while (cin >> word)
    {
        // if (word.compare("#") == 0)
        //     break;
        for (int i = 0; i != word.size();)
        {
            if (isalpha(word[i]))
            {
                int j = i;
                while (j != word.size() && isalpha(word[j]))
                {
                    word[j] = tolower(word[j]);
                    j++;
                }
                string temp = word.substr(i, j - i);
                if (temp != "")
                {
                    dictionary[temp]++;
                }
                i = j;
            }
            else
                i++;
        }
    }
    for (map<string, int>::iterator itr = dictionary.begin(); itr != dictionary.end(); itr++)
        cout << itr->first << endl;
}
