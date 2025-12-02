#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        string name;
        int age;

        Student(string n, int a)
        {
            name = n;
            age = a;
        }

        ~Student()
        {
            cout << "Object Destroyed" << endl;
        }
};



int main()
{
    Student s("Omkar", 25);
    return 0;
}