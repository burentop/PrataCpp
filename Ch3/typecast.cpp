// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99; // C syntax
    coots = int (19.99) + int (11.99); // C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // print as char
    cout << int (ch) << endl;                // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int> (ch) << endl; 

    return 0;
}