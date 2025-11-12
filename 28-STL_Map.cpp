#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> marks;
    marks["Omkar"] = 90;
    marks["Parth"] = 85;
    marks["Aditya"] = 92;

    for (auto pair : marks)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}