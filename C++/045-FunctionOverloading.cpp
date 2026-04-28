#include<iostream>

using namespace std;

void area(int radius)
{
    cout << "circle area: " << 3.14 * radius * radius << endl;
}

void area(int length, int width)
{
    cout << "Rectangle area: " << length * width << endl;
}

void area(float base, float height)
{
    cout << "Triangle area: " << 0.5 * base * height << endl;
}

int main()
{
    area(10); // circle
    area(5, 6); // rectangle;
    area(3.5f, 4.2f); // triangle
    return 0;
}