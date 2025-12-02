#include<iostream>
using namespace std;

/*
    Basic Function Syntax
    return_type function_name(paramters)
    {
        // Code
    }
*/

int add(int a, int b)
{
    return a + b;
}

// Void Function
void greet()
{
    cout << "Hello!" << endl;
}

// Function with Input and Output
float divide(int x, int y)
{
    return (float)x / y;
}


int main()
{
    cout << add(5, 3);
    cout << endl;
    greet();
    cout << endl;
    cout << divide(2, 4);
    cout << endl;
    return 0;
}