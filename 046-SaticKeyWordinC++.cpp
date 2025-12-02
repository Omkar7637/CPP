#include<iostream>

using namespace std;

// 1)Static local
void callCount()
{
    static int count = 0;
    count++;
    cout << "Call count = " << count << endl;
}

// 2) Static global
static int hidden = 99;

// 3) Static class variable + function
class Demo
{
    public:
    static int value;

    static void show()
    {
        cout << "static Value = " << value << endl;
    }
};

int Demo::value = 10;


int main()
{
    callCount();
    callCount();
    callCount();

    cout << hidden << endl;

    Demo::show();

    return 0;
}