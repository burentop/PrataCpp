// Exercise 3-1
// Prompt user for height in inches - convert to feet and inches
#include <iostream>
int main()
{
    using namespace std;
    int inches;
    const int inches_per_ft = 12;

    cout << "Please enter your height in inches:___\b\b\b";
    cin >> inches;

    int feet = inches / inches_per_ft;
    int inch = inches % inches_per_ft;
    cout << "You are " << feet << " ft, " << inch << " inches tall.\n";

    return 0;
}