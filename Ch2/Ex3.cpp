// Ex3.cpp -- practice adding multiple functions
#include <iostream>
using namespace std;

void blind();
void run();

int main()
{
    blind();
    blind();
    run();
    run();
}

void blind()
{
    cout << "Three blind mice\n";
}

void run()
{
    cout << "See how they run\n";
}