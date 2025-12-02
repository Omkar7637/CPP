#include <iostream> // includes input/output library
#include <string> 

using namespace std;

int main()
{
    string name;
    int age;
    float percentage;

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter Your percentage: ";
    cin >> percentage;

    cout << "\n--- Output ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Percentage: " << percentage << endl;

    return 0;
}