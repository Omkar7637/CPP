#include<iostream>
#include<memory>

using namespace std;

class Student
{
    public:
        Student()
        {
            cout << "Constructor For Student Call\nStudent Created!!\n";
        }
        ~Student()
        {
            cout << "Destructor For Student Call\nStudent destroyed!!\n";
        }

        void hello()
        {
            cout << "Hello Student!!\n";
        }
}
;
int main()
{
    unique_ptr<Student> s = make_unique<Student>();

    s->hello();

    return 0;
}