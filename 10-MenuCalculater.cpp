#include<iostream>
#include<limits>
using namespace std;

int main()
{
    // variable declaration
    int num1;
    int num2;
    int choice;

    // Code
    cout << "Enter 1st number: ";
    cin >> num1;
        while(cin.fail())  // If user enters char instead of number
    {
        cin.clear(); // Clear fail state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Remove wrong input
        cout << "Invalid input. Enter a num1: ";
        cin >> num1;
    }

    cout << "Enter 2nd number: ";
    cin >> num2;
        while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a num2: ";
        cin >> num2;
    }


    // Choice part 
    // cout << "Enter Choice: \n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit" << endl;
    // cin >> choice;

    cout << "\n";

    // Menu Driven 
    do
    {
        /* code */
        cout << "Enter Choice: \n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit" << endl;
        cin >> choice;

        if(cin.fail())
        {
            cin.clear(); // clear fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number.\n";
            continue; // restart loop
        }

        switch(choice)
        {
            case 1: cout << "Addition of "<< num1 << " + " << num2 << " = "<< num1 + num2 << endl; break;
            case 2: cout << "Subtraction of "<< num1 << " - " << num2 << " = "<< num1 - num2 << endl; break;
            case 3: cout << "Multiplication of "<< num1 << " * " << num2 << " = "<< num1 * num2 << endl; break;
            case 4: 
                    if(num2 != 0)
                        cout << "Divide of "<< num1 << " / " << num2 << " = "<< num1 / num2 << endl;
                    else
                        cout << "Error: Division by Zero not allowed."<< endl;
                break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Enter Valid Choice."; break;
        }
        cout << endl;

    } while (choice != 5);
    
}