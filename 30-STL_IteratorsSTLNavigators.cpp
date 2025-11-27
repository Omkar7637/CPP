#include<iostream>
#include<vector>

/*
    Iterators (The STL Naviagtors)
    Special objects that point to elements in the container
    THINK OF THEM AS "SMART POINTERS" THAT CAN:
    -> Move forward/backword
    -> Access elements
    -> Work with algorithmus like sort() or find()

    FUNCTION        MEANING
    begin()         Point to first element
    end()           Points after last element 
    rbegin()        Reverse begin (last element)
    rend()          Reverse end (before first)
    *it             Value at iterator
    it++            Move to next element

*/



using namespace std;

int main()
{
    vector<int> nums = { 10, 20, 30, 40, 50};

    vector<int>::iterator it; // Declare iterator

    cout << endl;
    cout << "Elemnets in vector: ";
    for(it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " "; // *it means "Value at iterator"
    }
    cout << endl;
    cout << "begin() = " << *nums.begin();
    cout << endl;
    cout << "end() = " << *nums.end();
    cout << endl;
    cout << "rbegin() = " << *nums.rbegin();
    cout << endl;
    cout << "rend() = " << *nums.rend();
    cout << endl;



    return 0;
}