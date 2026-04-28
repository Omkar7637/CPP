/*
    Map (Key Value Pairs)
    A Mao Stores data as a pair of key and value
    word -> meaning
    Name -> Marks
    PinCode -> Area
*/

// Basic Map Usage
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks;

    // Insert elements
    marks["Omkar"] = 95;
    marks["Parth"] = 96;
    marks["Aditya"] = 97;

    // Prnting map
    for(auto pair : marks)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
