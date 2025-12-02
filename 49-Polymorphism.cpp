#include<iostream>

using namespace std;

class Animal
{
    public:
        virtual void speak()
        {
            cout << "Animal sound\n";
        }
};

class Dog : public Animal
{
    public: 
        void speak() override
        {
            cout << "Bark\n";
        }
};

class Cat : public Animal
{
    public:
        void speak() override
        {
            cout << "Meow\n";
        }
};

int main()
{
    Animal* a;
    a = new Dog();
    a->speak();

    a = new Cat();
    a->speak();
}