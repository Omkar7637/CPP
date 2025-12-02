#include <iostream>
#include <limits>
using namespace std;

// Function Declartions
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main()
{
    int num1, num2;
    int choice;

    // Code
    cout << "Enter num1: ";
    cin >> num1;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input. Enter Num1: ";
        cin >> num1;
    }

    cout << "Enter num2: ";
    cin >> num2;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input, Enter a num2: ";
        cin >> num2;
    }

    do
    {
        cout << "Enter Your Choice 1.Add, 2.sub, 3.Mul, 4.Div, 5.Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a Number: ";
            continue;
        }

        switch(choice)
        {
            case 1: cout << "Addition " << num1 << " + " << num2 << " = " << add(num1, num2) << endl; break;
            case 2: cout << "Subtraction " << num1 << " - " << num2 << " = " << sub(num1, num2) << endl; break;
            case 3: cout << "Multiplication " << num1 << " * " << num2 << " = " << mul(num1, num2) << endl; break;
            case 4: 
                if(num2 != 0)
                    cout << "Division " << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by ZERO not allowed." << endl;
            break;
            case 5: cout << "EXITING...." << endl;
        }
        cout << endl;

    }while(choice != 5);
    
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return a / b;
}
