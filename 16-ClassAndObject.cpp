#include<iostream>
#include<string>
using namespace std;

// Class
class student
{
    public:
        string name;
        int age;

    void display()
    {
        cout << "Name : " << name << ", Age: " << age << endl;
    }

};


int main()
{
    // Object created
    student s1;
    s1.name = "Omkar";
    s1.age = 25;
    s1.display();
    return 0;
}