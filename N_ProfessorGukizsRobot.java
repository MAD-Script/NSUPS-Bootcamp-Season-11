// #include <iostream>

// using namespace std;
// int main(){
//     int sX,sY;
//     int eX,eY;
//     int xSteps = 0;
//     int ySteps = 0;

//     cin >> sX >> sY;
//     cin >> eX >> eY;

//     if(eX>sX)for (int i = sX; i < eX; i++) xSteps++;
//     if(eY>sY)for (int i = sY; i < eY; i++) ySteps++;
//     if(eX<sX)for (int i = sX; i > eX; i--) xSteps++;
//     if(eY<sY)for (int i = sY; i > eY; i--) ySteps++;
    
//     (xSteps > ySteps) ? cout << xSteps : cout << ySteps; 
    
//     return 0;
// }

import java.util.Scanner;

public class N_ProfessorGukizsRobot {

  public static void main(String[] args) {
    int sX, sY;
    int eX, eY;
    int xSteps = 0;
    int ySteps = 0;
    Scanner input = new Scanner(System.in);

    sX = input.nextInt();
    sY = input.nextInt();
    eX = input.nextInt();
    eY = input.nextInt();

    xSteps = (eX>sX) ? eX-sX : sX-eX;
    ySteps = (eY>sY) ? eY-sY : sY-eY;

    System.out.println((xSteps > ySteps) ? xSteps : ySteps);
    input.close();
  }
}