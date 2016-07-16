// Ex2.cpp -- converts furlongs to yards
#include <iostream>

int main()
{
    using namespace std;

    int furlong;
    cout << "Enter the number of furlongs: ";
    cin >> furlong;
    cout << endl;
    cout << furlong << " furlongs is the same as " << furlong * 220 
         << " yards.\n";
    return 0;
}