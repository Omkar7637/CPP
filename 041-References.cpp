#include<iostream>

using namespace std;

void addTen(int& n);

int main()
{
    int x = 5;
    addTen(x);

    cout << "After the function call value of x = " << x << endl;
    return 0;
}


void addTen(int& n)
{
    n += 10;
}