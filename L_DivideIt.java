// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// int main()
// {

//     int count;
//     long long int num;
//     int moves;
//     cin >> count;

//     for (int i = 0; i < count; i++)
//     {
//         moves =0;
//         cin >> num;
//         while(num%2==0 || num%3==0 || num%5==0){
//             moves++;
//             if (num%2==0)
//                 num/=2;
//             else if(num%3==0)
//                 num = (2*num)/3;
//             else if(num%5==0)
//                 num = (4*num)/5;
//         }

//         cout << ((num == 1) ? moves : -1 )<< endl;
//     }

//     return 0;
// }


import java.util.Scanner;

public class L_DivideIt {

  public static void main(String[] args) {
    int count;
    long num;
    int moves;
    Scanner input = new Scanner(System.in);
    count = input.nextInt();

    for (int i = 0; i < count; i++) {
      moves = 0;
      num = input.nextLong();
      while (num % 2 == 0 || num % 3 == 0 || num % 5 == 0) {
        moves++;
        if (num % 2 == 0) num /= 2; 
        else if (num % 3 == 0) num =(2 * num) / 3; 
        else if (num % 5 == 0) num = (4 * num) / 5;
      }

      System.out.println(((num == 1) ? moves : -1));
    }
    input.close();
  }
}
