#include <iostream>
using namespace std;

int main()
{
    // variable declarations
    int choice;

    cin >> choice;

    switch(choice)
    {
        case 1: cout << "Start"; break;
        case 2: cout << "Stop"; break;
        case 3: cout << "Pause"; break;
        default: cout << "Invalid"; break;
    }

    return 0;
}

