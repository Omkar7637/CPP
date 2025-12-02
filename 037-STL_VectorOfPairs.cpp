#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()
{
    vector<pair<string, int>> students;

    students.push_back({"Omkar", 95});
    students.push_back({"Parth", 88});
    students.push_back({"Aditya", 92});

    for(auto p : students)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}