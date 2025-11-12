#include<iostream>
#include<vector>

/* 
    What is vector?
    ->  A Vector is like a dynamic array - it grows or shrinks sutomatically
        when you add or remove elements;

        so insted of doing this:
        
*/
using namespace std;

int main()
{
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    for(int n : nums)
    {
        cout << n << " ";
    }
    return 0;
}