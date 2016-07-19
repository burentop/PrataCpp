// Exercise 5
// Prompt the user for the world population, and the US population.
// Output the % of the world that the US represents.
#include <iostream>
int main()
{
    using namespace std;

    long long world_pop;
    cout << "Please enter the current world population: ";
    cin >> world_pop;
    long long us_pop;
    cout << "Please enter the population of the US: ";
    cin >> us_pop;

    double us_percent = (double (us_pop) / double (world_pop)) * 100.0;
    cout << "The population of the US is " << us_percent 
         << "\% of the world population.\n";

    return 0; 
}