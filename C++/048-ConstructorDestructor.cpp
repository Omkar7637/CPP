#include<iostream>

using namespace std;

class Student
{
    public:
        string name;
        int age;

        // default constructor
        Student()
        {
            name = "Unknown";
            age = 0;
            cout << "Default Constructor\n";
        }

        // Parameterized constructor
        Student(string n, int a) : name(n), age(a)
        {
            cout << "Parameterized constructor\n";
        }

        // Copy constructor 
        Student(const Student& s)
        {
            name = s.name;
            age = s.age;
            cout << "Copy constructor\n";
        }

        ~Student()
        {
            cout << "Destructor for " << name << endl;
        }
};

int main()
{
    Student s1; // default
    Student s2("Omkar", 22); // parameterized
    Student s3 = s2; // copy
    return 0;
}