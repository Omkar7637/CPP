// Inhertance allows one class to derive from another
#include<iostream>

using namespace std;

class person
{
    public:
        string name;
        int age;

        void setPerson(string n, int a)
        {
            name = n;
            age = a;
        }
};

class Student : public person // inherits from person
{
    public:
        float marks;
        
        void setMarks(float m)
        {
            marks = m;
        }

        void display()
        {
            cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;

        }
};

int main()
{
    Student s1;
    s1.setPerson("Omkar", 24);
    s1.setMarks(92.3);
    s1.display();

    return 0;
}