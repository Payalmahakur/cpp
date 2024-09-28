#include <iostream>
using namespace std;
 
int main() {
    int numbers[10];
     int k=1;

    cout << "Enter 10 numbers : " << endl;
    for (int i = 1; i < 10; i++) {
        cin >> numbers[i];
    }
     for (int i = 1; i <10;i++) {
        if (numbers[i]%2==0){ 
            k++;
        }
     }
     cout << "the number of even numbers is : "<< k << endl;
     return 0;
}