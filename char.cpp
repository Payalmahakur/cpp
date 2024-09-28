#include<iostream>
using namespace std;
int main() {
     char ch;
     cout << "enter a char"<<endl;
     cin>>ch;

     switch (ch) 
     {
     case 'A':
     case 'a':
     cout<<"Ajit"<<endl;
        break;

     case 'S':
     case 's':
     cout<<"Sneha"<<endl;
        break;

     case 'P':
     case 'p':
     cout<<"Payal"<<endl;
        break;
        
     case 'T':
     case 't':
     cout<<"Atanu"<<endl;
        break;   
     
    default:
    cout<<"error";
     
     }
    return 0;



}