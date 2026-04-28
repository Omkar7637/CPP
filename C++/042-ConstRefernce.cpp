#include<iostream>
#include<vector>

using namespace std;

void printVector(const vector<int>& v);

int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printVector(array);

    return 0;
}


void printVector(const vector<int>& v)
{
    for(const auto& it : v)
    {
        cout << it << " ";
    }

    cout << endl;
}