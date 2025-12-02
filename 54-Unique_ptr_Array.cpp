#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr<int[]> arr = make_unique<int[]>(5);

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i + 100;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}