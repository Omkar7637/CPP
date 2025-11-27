#include<iostream>

using namespace std;

class Test
{
    public:
        int x;
        mutable int y;

        Test() : x(10), y(20){}

        void show() const
        {
            // x = 100; // Error
            y = 200; // Ok (mutable)
            cout << x << " " << y << endl;
        }
};


int main()
{
    int a = 10;
    int b = 20;

    const int* p1 = &a; // Pointer to const
    int * const p2 = &a; // Const pointer
    const int* const p3 = &a; // both const

    Test t;
    t.show();
    return 0;
}