#include<iostream>
#include<memory>

using namespace std;

int main()
{
    shared_ptr<int> p1 = make_shared<int>(100);
    shared_ptr<int> p2 = p1;

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << "Shared_ptr P1 Use Count = " << p1.use_count() << endl;
    cout << "Shared_ptr P2 Use Count = " << p2.use_count() << endl;

    

    return 0;

}