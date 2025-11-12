#include<iostream>
#include<vector> // Header File for vector

/* 
    What is vector?
    ->  A Vector is like a dynamic array - it grows or shrinks sutomatically
        when you add or remove elements;

        so insted of doing this:
        int arr[5]; // Fixed Size

        You can do this:
        vector<int> arr; synamic size

        FUNCTIONS       MEANINGS
        push_back(x)    Adds element to end
        pop_pack()      Removes last element
        size()          Returns number od elements
        clear()         Removes all elements
        front()         First element
        back()          last element
        
*/
using namespace std;

class vectors
{
    private:
        vector<int> numbers; // decalare vector

    public:
        void pushBackVector(int a)
        {
            // add elemnets (puch back means add at the end)
            numbers.push_back(a);
        }

        void showFront()
        {
            cout << "Front: " << numbers.front() << endl;
        }

        void showBack()
        {
            cout << "Back: " << numbers.back() << endl;
        }

        void popBack()
        {
            numbers.pop_back(); // removes elements
        }

        void showvector()
        {
            cout << "Number in vector: ";
            for(int i = 0; i < numbers.size(); i++)
            {
                cout << numbers[i] << " ";
            }
        }

        void showVectorAnotherMethod()
        {
            cout << "Inside ANother Method elements are: ";
            for(int n : numbers) // For each loop
            {
                cout << n << " ";
            }
        }


};

int main()
{
    vectors s1;

    s1.pushBackVector(10);
    s1.pushBackVector(20);
    s1.pushBackVector(30);
    s1.pushBackVector(40);
    s1.pushBackVector(50);

    s1.showvector();
    cout << endl;
    s1.showvector();
    cout << endl;
    s1.showVectorAnotherMethod();
    cout << endl;
    s1.showBack();
    s1.showFront();
    s1.popBack();
    s1.showvector();
    cout << endl;
    s1.popBack();
    s1.showvector();
    cout << endl;
    return 0;
}

