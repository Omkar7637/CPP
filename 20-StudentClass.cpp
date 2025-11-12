#include<iostream>
#include<string>

using namespace std;

class student
{
    private:
        string name;
        int age;
        float marks;

    public:
        student()
        {
            name = "Unknown";
            age = 0;
            marks = 0.0;
        }

        void setData(string namelocal, int agelocal, float markslocal)
        {
            name = namelocal;
            age = agelocal;
            marks = markslocal;
        }

        void displayData()
        {
            cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
        }


};


int main()
{
    student s1, s2;
    string name;
    int age;
    float marks;

    // Studnet 1 operations
    cout << "Enter Name, age, makrs: ";
    cin >> name >> age >> marks;
    s1.setData(name, age, marks);

    // Studnet 2 Operations
    cout << "Enter Name, Age, Makrs: ";
    cin >> name >> age >> marks;
    s2.setData(name, age, marks);

    s1.displayData();
    s2.displayData();


    return 0;
}