#include <iostream>
using namespace std;

int main() {
    
    float subject1, subject2, subject3, subject4, subject5, total, percentage;
    char grade;
    
    
    cout << "Enter marks of 5 subjects : " << endl;
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100;

    
    if (percentage >= 81 && percentage <= 100)
        grade = 'A';
    else if (percentage >= 71 && percentage <= 80)
        grade = 'B';
    else if (percentage >= 61 && percentage <= 70)
        grade = 'C';
    else if (percentage >= 40 && percentage <= 60)
        grade = 'D';
    else
        grade = 'E';

    
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
