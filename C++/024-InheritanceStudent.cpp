#include<iostream>

using namespace std;

// Base Class Person
class Person 
{
    private:
        string name;
        int age;

    public:

        Person() 
        {
            name = "unknown";
            age = 0;
            cout << "Default Construct is Called inside Person!" << endl;
        }

        Person(string n, int a)
        {
            name = n;
            age = a;
            cout << "Parameterized Constructor called inside person for: " << name << endl;
        }

        void setPerson(string n, int a)
        {
            name = n;
            age = a;
        }

        string getPersonName()
        {
            return name;
        }

        int getPersonAge()
        {
            return age;
        }

        ~Person()
        {
            cout << "Destructor is called inside Person for: " << name << endl;
        }
};

class Student : public Person
{
    private: 
        float marks;
        char grade;

    public:

        Student()
        {
            marks = 0.0;
            grade = 'F';
            cout << "Default Constructor is called inside Student!" << endl;
        }

        Student(string n, int a, float m, char g) : Person(n, a)
        {
            marks = m;
            grade = g;
            cout << "Paramterized Constructor is called inside Students for: " << getPersonName() << endl;
        }

        void setStudent(float m, char g)
        {
            marks = m;
            grade = g;
        }

        void display()
        {
            cout << "Name: " << getPersonName() << ", Age: " << getPersonAge() << ", Marks: " 
            << marks << ", Grade: " << grade << endl;
        }

        ~Student()
        {
            cout << "Destructor is called inside Student for: " << getPersonName() << endl;
        }

};

int main()
{
    Student s1, s2; // Default Constructor
    Student s3("HelloWorld", 45, 65.65, 'B');

    // For S1
    s1.setPerson("Omkar", 25);
    s1.setStudent(98.2, 'A');

    // For S2
    s2.setPerson("abc", 23);
    s2.setStudent(87.54, 'B');

    // Display
    s1.display();
    s2.display();
    s3.display();
    return 0;
}