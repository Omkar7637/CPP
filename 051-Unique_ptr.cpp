#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr<int> p1 = make_unique<int>(5);

    cout << *p1 << endl;

    *p1 = 200;

    cout << *p1 << endl;

    cout << "============================================" << endl;

    unique_ptr<int> p2 = move(p1);

    cout << *p2 << endl; 

    cout << (p1 == nullptr); 
    
    return 0;
}