// Constructor in Detailed
#include<iostream>

using namespace std;

class Student
{
    private:
        string name;
        int age;
        float marks;

    public:
        // Default Constructor
        Student()
        {
            name = "Unknown";
            age = 0;
            marks = 0.0f;
            cout << "Default Constructor called\n";
        }

        // Paramteterized Constructor
        Student(string n, int a, float m)
        {
            name = n;
            age = a;
            marks = m;
            cout << "Parameterized Constructor called\n";
        }

        void display()
        {
            cout << "Name: " << name << ", Age: " << age << ", Marks" << marks << endl;
        }

        // Destructor
        ~Student()
        {
            cout << "Destructot Called for: " << name << endl;
        }
};

int main()
{
    Student s1; // Callles default constructor
    Student s2("Omkar", 25, 91.5); // Calls paramterized constructor

    s1.display();
    s2.display();

    return 0;
}
