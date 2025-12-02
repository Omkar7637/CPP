#include<iostream>
#include<memory>

using namespace std;

class B;

class A
{
    public: 
        weak_ptr<B> bptr; // weak link
        ~A() { cout << "A destroyed\n"; }
};

class B
{
    public:
        shared_ptr<A> aptr; // Strong link
        ~B() { cout << "B destroyed\n"; }
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->bptr = b; // weak pointer
    b->aptr = a; // shared pointer
    return 0;
}