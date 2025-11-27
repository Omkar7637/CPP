#include<iostream>

using namespace std;

int main()
{
    int local_int = 5;
    int* local_dynamic_int = new int(12);

    cout << "Local Stack Integer Value = " << local_int << endl;
    cout << "Local Heap Integer Value = " << local_dynamic_int[0] << endl;
    
    local_int = 123;
    local_dynamic_int[0] = 1234;
    
    cout << "Local Stack Integer Value = " << local_int << endl;
    cout << "Local Heap Integer Value = " << local_dynamic_int[0] << endl;

    delete local_dynamic_int;
    return 0;
}