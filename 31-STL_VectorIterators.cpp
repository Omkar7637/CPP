#include<iostream>
#include<vector>
#include<limits>

using namespace std;

class vectors
{
    private:
        vector<int> nums;
        vector<int>::iterator it;
        int userRequermentVectorSizeNumber;
        int number;
        int sum;
        int average;

    public:

        vectors()
        {
            number = 0;
            sum = 0;
            average = 0;
            cout << "Constructor Called!!!" << endl;
        }

        void takeVectorSizeFromUser()
        {
            cout << "Enter number of elements: ";
            cin >> userRequermentVectorSizeNumber;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Input" << endl;
                cout << "Enter number of elements: ";
                cin >> userRequermentVectorSizeNumber;
            }
        }

        void takeNumbersFromUser()
        {
            for(int i = 0; i < userRequermentVectorSizeNumber; i++)
            {
                cout << "Enter Number " << i << ": ";
                cin >> number;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input!!" << endl;
                    cout << "Enter Number " << i << ":";
                    cin >> number;
                }
                nums.push_back(number);
            }
        }

        void showVectorNumbers()
        {
            cout << "Enter Numbers: ";
            for(int n : nums)
            {
                cout << n << " ";
            }
        }

        void forwardPrintAllNumbersUsingIterator()
        {
            cout << "Forward: ";
            for(it = nums.begin(); it != nums.end(); it++)
            {
                cout << *it << " ";
            }
        }

        void reversePrintAllNumbersUsingIterator()
        {
            cout << "Reverse: ";
            for(vector<int>::reverse_iterator it = nums.rbegin(); it != nums.rend(); it++)
            {
                cout << *it << " ";
            }
        }

        int sumOfAllNumbers()
        {
            sum = 0;
            for(it = nums.begin(); it != nums.end(); it++)
            {
                sum += *it;
            }
            //cout << "Sum = " << sum;
            return sum;
        }

        int averageOfAllNumbers()
        {
            sum = 0;
            average = 0;
            for(it = nums.begin(); it != nums.end(); it++)
            {
                sum += *it;
            }

            average = (sum / userRequermentVectorSizeNumber);

            return average;
        }



};

int main()
{
    vectors v1;
    v1.takeVectorSizeFromUser();
    v1.takeNumbersFromUser();
    v1.showVectorNumbers();
    v1.forwardPrintAllNumbersUsingIterator();
    v1.reversePrintAllNumbersUsingIterator();
    cout << "Sum: " << v1.sumOfAllNumbers() << endl;;
    cout << "Average: " << v1.averageOfAllNumbers() << endl;

    return 0;
}