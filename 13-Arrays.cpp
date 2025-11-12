#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main()
{
    // variable decalartions
    int arr[5];

    // Input
    for(int i = 0; i < 5; i++)
    {
        // cin >> arr[i];
    }

    // Output 
    for(int i = 0; i < 5; i++)
    {
        // cout << arr[i] << " ";
    }

    // STRINGS 
    string name;
    cout << "Enter Your name: ";
    cin >> name;
    cout << "Hello " << name << endl;

    // Clear Buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Your name: ";
    getline(cin, name);
    cout << "Hello " << name;



    return 0;
}