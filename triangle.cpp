#include <iostream>
using namespace std;
 
 int main () {
     int angle1,angle2,angle3;
     cout << "Enter a 3 angle :" ;
     cin >>angle1>>angle2>>angle3;

     if (angle1+angle2+angle3 == 180){
          cout << "triangle is possible."<< endl;
     } else {
          cout << "triangle is  not possible."<< endl;
     }

    return 0;




 }