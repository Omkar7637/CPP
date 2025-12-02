#include<iostream>
#include<memory>

using namespace std;

class Student 
{
    public:
    Student() { cout << "Student created\n"; }
    ~Student() { cout << "Studnet destroyed\n"; }
};

int main()
{
    shared_ptr<Student> s1 = make_shared<Student>();

    shared_ptr<Student> s2 = s1;

    cout << s1.use_count() << endl;
    return 0;
}