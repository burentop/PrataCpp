// Exercise 3-7
// Prompt user for "European style" fuel consumption (lt/100k).
// Output same consumption rate in US style (mile/gal)
#include <iostream>
int main()
{
    using namespace std;
    const double lt_per_gal = 3.875;
    const double mile_per_100k = 62.14;

    double lt_per_100k;
    cout << "Enter the number of liters per 100k: ";
    cin >> lt_per_100k;

    double lt_per_mile = lt_per_100k / mile_per_100k;
    double gal_per_mile = lt_per_mile / lt_per_gal;
    double mpg = 1.0 / gal_per_mile;

    cout << lt_per_100k << "Liters per 100k is the same as "
         << mpg << " miles per gallon.\n";

    return 0;     
}