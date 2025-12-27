#include<iostream>
using namespace std;

int main()
{
    float marks[5], total = 0, average, percentage;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    char grade;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 45)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade = " << grade;
    return 0;
}