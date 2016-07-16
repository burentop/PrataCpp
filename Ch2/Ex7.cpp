// Ex7.cpp -- print hours and minute in time format
#include <iostream>
using namespace std;

void combine(int, int);

int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    combine(hours, minutes);
}

void combine(int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;
}