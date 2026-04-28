#include<iostream>

using namespace std;

class Shape
{
    public:
        virtual void draw() // Vitual allows override
        { 
            cout << "Drawing Shapes" << endl;
        }
};

class Circle : public Shape
{
    public:
        void draw() override
        {
            cout << "Drawing Circle" << endl;
        }
};


int main()
{
    Shape *s; // base class Pointer
    Circle c;
    s = &c;
    s->draw();
    return 0;
}