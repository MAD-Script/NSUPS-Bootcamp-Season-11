// import java.util.*;
// public class R_SloganofPrincess {

//     public static void main(String[] args) {
//         int count;
//         String fLine;
//         String nLine;
//         Map<String,String> slogan = new HashMap<String,String>() ;

//         Scanner input = new Scanner(System.in);
//         count = input.nextInt();
//         input.nextLine();
//         for (int i = 0; i < count; i++) {
//             fLine = input.nextLine();
//             nLine = input.nextLine();
//             slogan.put(fLine, nLine);
//         }

//         count = input.nextInt();
//         input.nextLine();
//         for (int i = 0; i < count; i++) {
//             fLine = input.nextLine();
//             System.out.println(slogan.get(fLine));
//         }

//         input.close();
//     }
// }
#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <map>

using namespace std;
int main(){
    int count;
    string trash;
    string fLine;
    string nLine;
    map<string,string> slogan;

    cin >> count;
    getline(cin,trash);
    for (int i = 0; i < count; i++)
    {
        getline(cin,fLine);
        getline(cin,nLine);
        slogan[fLine] = nLine;
    }

    cin >> count;
    getline(cin,trash);

    for (int i = 0; i < count; i++)
    {
        getline(cin,fLine);
        cout << slogan[fLine] << endl ;
    }
}


