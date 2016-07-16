// Ex5.cpp -- convert celsius to fahrenheit
#include <iostream>
int convert(int);

int main()
{
    using namespace std;

    int celsius;
    cout << "Enter a temperature in celsius: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convert(celsius) <<
         " degrees Fahrenheit.\n";
}

int convert(int cel)
{
    return (1.8 * cel) + 32;
}