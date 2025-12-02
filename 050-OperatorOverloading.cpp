#include<iostream>

using namespace std;

class Number
{
    public:
        int value;

        Number(int v)
        {
            value = v;
        }

        Number operator+(const Number& other)
        {
            return Number(this->value + other.value);
        }

        bool operator==(const Number& other)
        {
            return this->value == other.value;
        }

        friend ostream& operator<<(ostream& out, const Number& n)
        {
            out << n.value;
            return out;
        }

};

int main()
{
    Number a(5);
    Number b(5);

    Number c = a + b;
    cout << c.value;

    cout << endl;

    if(a == b)
    {
        cout << "Equal\n";
    }

    


    return 0;
}