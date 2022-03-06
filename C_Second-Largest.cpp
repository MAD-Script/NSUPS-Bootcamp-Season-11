#include <iostream>

using namespace std;

int largest(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int SecondLargest(int A, int B, int C){

    if(A>B && A>C){
        return largest(B,C);
    }else if(B>A && B>C){
        return largest(A,C);
    }else if(C>A && C>B){
        return largest(B,A);
    }
    
}

int main(){
    int count = 0;
    int num1;
    int num2;
    int num3;
    cin >> count;

    int sndLarge[count];
    for (int i = 0; i < count; i++)
    {
        cin >> num1 >> num2 >> num3; 
        sndLarge[i] = SecondLargest(num1,num2,num3);
    }
    for (int i = 0; i < count; i++)
    {
        cout << sndLarge[i] << endl;
    }
    return 0;
}