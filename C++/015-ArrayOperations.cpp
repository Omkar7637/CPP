#include <iostream>
#include<limits>
using namespace std;

int main()
{
    int arraySize = 0;

    cout << "Enter the size of array(How many elemnts do you want): ";
    cin >> arraySize;
    
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
        cout << "Enter the size of array(How many elemnts do you want): ";
        cin >> arraySize;
    }

    int array[arraySize] = {0};

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Enter the " << i + 1 << " Element: ";
        cin >> array[i];
        while(cin.fail())
        {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
        cout << "Invalid Input. Please enter a number: ";
        cin >> array[i];
        }
    }

    cout << endl << "Enter Elements: ";
    for(int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    int minimumNumber = 0, maxmiumNumber = 0;

    maxmiumNumber = minimumNumber = array[0];

    for(int i = 1; i < arraySize; i++)
    {
        if(maxmiumNumber < array[i])
        {
            maxmiumNumber = array[i];
        }
        if(minimumNumber > array[i])
        {
            minimumNumber = array[i];
        }

    }

    cout << "Maximum Number in array: " << maxmiumNumber << endl;
    cout << "Minimum Number in array: " << minimumNumber << endl;

    return 0;
}