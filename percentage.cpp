#include <iostream>
using namespace std;

   int main() {
      float phy,chem,bio,maths,comp;
      float total,per;
      char grade;

      cout << "Enter marks for phy: ";
       cin >> phy;
       cout << "Enter marks for chem: ";
       cin >> chem;
       cout << "Enter marks for bio: ";
       cin >> bio;
       cout << "Enter marks for maths: ";
       cin >> maths;
       cout << "Enter marks for comp: ";
       cin >> comp;
       
       total = phy+chem+bio+maths+comp;
       per = (total/500)*100;

       if(per >=90){
        grade='A';
       } else if(per >=80){
        grade='B';
       }else if(per >=70){
        grade='C';
       }else if(per >=60){
        grade='D';
       }else if(per >=40){
        grade='E';
       }else if(per <=40){
        grade='F';
       }

       cout << "total marks : " << total << endl;
       cout << "percentage: " << per << endl;
       cout << "grade: "<< grade << endl;

       return 0;
   }