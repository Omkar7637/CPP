// A Constructor initilizes object values automatically

#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Student s("Omkar", 25);

    cout << "Name: " << s.name <<  " Age: " << s.age << endl;
    return 0;
}