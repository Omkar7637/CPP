#include<iostream>
#include<memory>

using namespace std;

int main()
{
    shared_ptr<int> a = make_shared<int>(10);

    shared_ptr<int> b = a; // Share Ownership

    cout << *a << endl; // 10
    cout << *b << endl; // 10

    cout << a.use_count() << endl; // 2

    return 0;
}