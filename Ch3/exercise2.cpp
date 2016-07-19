// Exercise 3-2
// Prompt user for height and weight; report BMI
#include <iostream>
int main()
{
    using namespace std;
    const int inch_per_ft = 12;
    const double meter_per_inch = 0.0254;
    const double kilo_per_pnd = 2.2;
    int feet, inches, pounds;

    cout << "Please enter your height in feet and inches.\n";
    cout << "(e.g. 5 10):_ __\b\b\b\b";
    cin >> feet >> inches;
    cout << "Please enter your weight in lbs:___\b\b\b";
    cin >> pounds;

    int tot_inches = (feet * inch_per_ft) + inches;
    double meters = double (tot_inches) * meter_per_inch;
    double kilos = double (pounds) / kilo_per_pnd;
    double bmi = kilos / (meters * meters);

    cout << "Your BMI is " << bmi << endl;

    return 0;
}