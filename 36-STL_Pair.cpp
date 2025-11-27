/*
    ## The Pair - Small but Mighty
    # A Pair is a small container that holdes two values (of possible different types).
    # It's often used inside maps, sets, or for returning muliple values from a function.
    Examples:- 
*/

#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<string, int> student;

    student.first = "Omkar";
    student.second = 95;

    cout << student.first << " -> " << student.second;
    return 0;
}

