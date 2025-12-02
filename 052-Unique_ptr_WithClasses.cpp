#include<iostream>
#include<memory>

using namespace std;

class Car
{
    public:
        Car() { cout << "Car created!\n"; }
        ~Car() { cout << "Car destroyed!\n"; }

        void drive()
        {
            cout << "Car is driving!\n";
        }
};

int main()
{
    unique_ptr<Car> c = make_unique<Car>();

    c->drive();

    return 0;
}