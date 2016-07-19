// Exercise 6
// Prompt user for miles driven and gallons of fuel used.
// Output mpg.
#include <iostream>
int main() 
{
    using namespace std;

    int miles;
    double gallons;
    cout << "Enter the number of miles driven: ";
    cin >> miles;
    cout << "Enter the gallons of gasoline used: ";
    cin >> gallons;

    double mpg = miles / gallons;
    cout << "Your car gets " << mpg << " miles per gallon.\n";

    return 0;
}