// Exercise 3-4
// Prompt the user for a number of seconds.
// Output the number of days, hours, minutes, seconds in that value.
#include <iostream>
int main()
{
    using namespace std;
    const int hr_per_day = 24;
    const int min_per_hr = 60;
    const int sec_per_min = 60;

    long long seconds_input;
    cout << "Enter the number of seconds: ";
    cin >> seconds_input;

    int minutes = seconds_input / sec_per_min;
    int seconds = seconds_input % sec_per_min;
    int hours = minutes / min_per_hr;
    minutes = minutes % min_per_hr;
    int days = hours / hr_per_day;
    hours = hours % hr_per_day;

    cout << seconds_input << " seconds = ";
    cout << days << " days, " << hours << " hours, " << minutes
         << " minutes, " << seconds << " seconds\n";

    return 0; 
}