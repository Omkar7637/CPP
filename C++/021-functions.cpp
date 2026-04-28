#include<iostream>
#include<limits>

using namespace std;

class calculater
{
    private:
        int a;
        int b;

    public:
        void setNumber(int num1, int num2)
        {
            a = num1;
            b = num2;
        }

        int add()
        {
            return (a + b);
        }

        int subtract()
        {
            return (a - b);
        }

        int multiply()
        {
            return (a * b);
        }

        float divide()
        {
            return a / b;
        }
};


int main()
{
    calculater c1;
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input Enter Numeric Value: ";
        cin >> num1;
    }

    cout << "Enter Second Number: ";
    cin >> num2;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input Enter Numeric Value: ";
        cin >> num2;
    }

    // Setting Number
    c1.setNumber(num1, num2);

    // Addition
    cout << "Addition = " << c1.add() << endl;

    // Subtraction
    cout << "Subtraction = "<< c1.subtract() << endl;

    // Multiplication
    cout << "Multiplication = " << c1.multiply() << endl;
    
    // Division
    if(num2 != 0)
    {
        cout << "Division = " << c1.divide() << endl;

    }
    else
    {
        cout << "Cannot divide by Zero!" << endl;
    }


    return 0;
}