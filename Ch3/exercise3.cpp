// Exercise 3-3
// Prompt user for latitude degrees, minutes and seconds.
// Output in decimal format.
#include <iostream>
int main()
{
    using namespace std;
    const double arcs_per_deg = 1 / 3600.0;
    const double min_per_deg = 1 / 60.0;
    double deg, minutes, arcs;

    cout << "Please enter a latitude in degrees, minutes and arcs.\n";
    cout << "(e.g. 37 51 19): __ __ __\b\b\b\b\b\b\b\b";
    cin >> deg >> minutes >> arcs;

    double degrees = deg + (minutes * min_per_deg);
    degrees = degrees + (arcs * arcs_per_deg);

    cout << deg << " degrees, " << minutes << " minutes, " << arcs
         << " seconds = " << degrees << " degrees\n";

    return 0; 
}