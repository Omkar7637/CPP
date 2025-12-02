/*
    Important Functions
    Function                Description
    insert({Key, value})    Add an elemennt
    erase(key)              Removes Key-Value Pair
    find(key)               Returns iterator to key
    size()                  Total elements
    clear()                 Removes all elements
    count(key)              Returns 1 if key exists, eles 0
*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> marks = {
        {"Omkar", 95},
        {"Parth", 88}, 
        {"Aditya", 92}
    };

    string name;
    cout << "Enter Name to serach: ";
    cin >> name;

    if (marks.count(name))
    {
        cout << name << "'s name = " << marks[name] << endl; 
    }
    else
    {
        cout << "Name not found." << endl;
    }

    marks.erase("Parth"); // Removes Parth
    cout << "\nAfter erease:\n";
    for (auto p : marks)
    {
        cout << p.first << " -> " << p.second << endl;
    }
    return 0;
}

