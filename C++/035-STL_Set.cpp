/*
    # What is a Set?
    A set stores unique elements (no duplicates) in sorted order - automatically.
    Think of it as a"unique aut-sorting bag" that removes duplicates for you.

    # Common Set Functions 
    Functions           Description
    insert(x)           Add element
    erase(x)            Remove element
    find(x)             Return iterator to element
    size()              Count of elements
    empty()             True if set is empty
    clear()             Remove all elements            

    Example:-
*/


#include<iostream>
#include<set>

using namespace std;

void exampleOne();
void exampleTwo();

int main()
{
    exampleOne();
    cout << endl;
    exampleTwo();
}

void exampleTwo()
{
    set<int> data = {2, 4, 6, 8, 10};

    if(data.find(6) != data.end())
    {
        cout << "6 found!\n";
    }
    else
    {
        cout << "6 not found!\n";
    }

    data.erase(8);
    cout << "After erase: ";
    for(auto x : data)
    {
        cout << x << " ";
    }
}


void exampleOne()
{
    set<int> numbers;
    
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(20);
    numbers.insert(10); // Duplicate Ignore
    
    cout << "Set elements: ";
    for (auto n : numbers)
        cout << n << " ";

}