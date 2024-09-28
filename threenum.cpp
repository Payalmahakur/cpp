#include <iostream>
using namespace std;
int main() {
     int num1,num2,num3;
     
     cout << "Enter first number: ";
     cin >> num1;

     cout << "Enter second number: ";
     cin >> num2;

     cout << "Enter third number: ";
     cin >> num3;

     int max_num = num1;
     if (num2 > max_num) {
        max_num = num2;
     }
      if (num3 > max_num){
        max_num = num3;
      }
      cout <<  "Maximum number is : " << max_num << endl;
       return 0;
}