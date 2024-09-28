#include <iostream>
using namespace std;

int main() {
    char choice;
    cout << "Enter a character: ";
    cin >> choice;

    switch(choice) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << choice << " is a vowel." << endl;
            break;
        default:
            cout<<"is a consonant";
            break;
    }

    return 0;
}
