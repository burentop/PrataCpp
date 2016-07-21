// Exercise 4-1
// Prompt user for fname, lname, grade desired and age
// Output full name, actual grade and age

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    enum grades {A, B, C, D};

    char fname[30];
    cout << "What is your first name? ";
    cin.getline(fname, 30);
    char lname[20];
    cout << "What is your last name? ";
    cin.getline(lname, 20);
    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    ++grade;
    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}