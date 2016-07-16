// Ex6.cpp -- convert light years to astronomical units
#include <iostream>
double convert(double);

int main()
{
    using namespace std;

    double lyear;
    cout << "Enter the number of light years: ";
    cin >> lyear;
    cout << lyear << " light years = " << convert(lyear)
         << " astronomical units\n";
}

double convert(double ly)
{
    return ly * 63240;
}