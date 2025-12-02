#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are a minor." << endl;
    }
}