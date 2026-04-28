#include<iostream>
#include<memory>

using namespace std;

class Car
{
    public:
        Car() { cout << "Car Created!!" << endl; }
        ~Car() { cout << "Car Destroyed!!!" << endl; }

        void drive()
        {
            cout << "Driving..." << endl;
        }
};

int main()
{
    shared_ptr<Car> c1 = make_shared<Car>();

    c1->drive();

    shared_ptr<Car> c2 = c1;

    c2->drive();

    cout << c1.use_count() << endl;
    cout << c2.use_count() << endl; 

    return 0;
}