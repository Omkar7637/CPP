/*
    # STL has a powerful header:
    #include <algorithm>

    it gives you ready functions to perform:
    -> sorting
    -> finding
    -> counting
    -> reversing
    -> Maximum / minimum
    -> Removing duplicates

    ===========================================================
    1) sort()
    sort(v.begin(), v.end());
    
    EXample: 
    Vector<int> nums = {5, 2, 9, 1};
    sort(nums.begin(), nums.end());
    Output: 1, 2, 5, 9
    
    ===========================================================
    2) find()
    auto it = find(v.begin(), v.end(), value);
    If found -> returns iterator
    If not found -> returns v.end()

    ===========================================================
    3) Count()
    int c = count(v.begin(), v.end(), 10);
    counts how many times 10 appers.

    ===========================================================
    4) reverse()
    reverse(v.begin(), v.end());

    ===========================================================
    5) min_element()/max_element()
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    ===========================================================

    # Task:- 
    1) Takes N numbers into vector
    2) Menu-driven options:
        1. Sort
        2. Reverse
        3. Find an element
        4. count occurrences of element
        5. show min &max
        6. Display vector
        7. Exit
        
    # Output:
        Enter numbers: 10 5 20 10 7
        1. Sort
        2. Reverse
        3. Find
        4. count
        5. Min & Max
        6. Display
        7. Exit

        Enter Choice: 1
        Sorted: 5 7 10 10 20

        Enter Choice: 4
        Enter Value: 10
        10 occurs 2 times

*/

#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>

using namespace std;

class Task
{
    private:
        vector<int> array;
        int elementValue = 0;

    public:

        void enterElements(int totalElements)
        {

            for(int i = 0; i < totalElements; i++)
            {
                cout << "Enter " << i + 1 << " Number: ";
                cin >> elementValue;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Enter Valid Input: ";
                    cin >> elementValue;
                }
                array.push_back(elementValue);
            }

        }

        void showElements() const
        {
            for(const auto& i :  array)
            {
                cout << i << " ";   
            }
        }

        void sortElements()
        {
            sort(array.begin(), array.end());
        }

        void reverseElements()
        {
            reverse(array.begin(), array.end());
        }

        void findElement(int key) const
        {
            auto it = find(array.begin(), array.end(), key);

            if(it != array.end())
            {
                cout << key << " is found!!";
            }
            else
            {
                cout << key << " is Not Found!!";
            }

            cout << endl;
        }

        void occurrencesOfElements(int key) const 
        {
            int i = count(array.begin(), array.end(), key);

            cout << "Occurrences: " << i << endl;
        }

        void minNumber() const
        {
            cout << "Minimum number in array: " << *min_element(array.begin(), array.end()) << endl;
        }
        
        void maxNumber() const
        {
            cout << "Maximum number in array: " << *max_element(array.begin(), array.end()) << endl;
        }
        

};

int main()
{

    Task t;
    int userInputNumber = 0;
    int key = 0;
    int count = 0;
    int choice = 0;
    

    cout << "How Many Numbers You want to enter: ";
    cin >> userInputNumber;
    t.enterElements(userInputNumber);

    do
    {
        cout << "=========================" << endl;
        cout << "1. Sort\n2. Reverse\n3. Find an element\n4. Count occurrences of element\n5. Show Min & Max\n6. Display vector\n7. Exit\n" << endl; 
        cout << "Enter Choice: ";
        cin >> choice;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input!! Enter Valid Input: ";
            cin >> choice;
        }

        
        switch(choice)
        {
            case 1:
                t.sortElements();
                break;

            case 2:
                t.reverseElements();
                break;

            case 3:
                cout << "Enter key to be search: ";
                cin >> key;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid Input! Enter Number again: ";
                    cin >> key;
                }
                cout << endl;
                t.findElement(key);                    
                break;
            
            case 4: 
                
                cout << "Enter a number to check it's occurrences: ";
                cin >> count;

                t.occurrencesOfElements(count);
                cout << endl;
                
                break;

            case 5:
                t.minNumber();
                t.maxNumber();
                break;

            case 6:
                t.showElements();
                break;
            
        }

        cout << endl;
    }while(choice != 7);


    return 0;
}