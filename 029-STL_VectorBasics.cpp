#include <iostream>
#include <vector>

using namespace std;

class vectors
{
    private:
        vector<int> numbers;
        int sumOfAllElements;
        int averageOfAllNumbers;
        int smallestNumberInVector;
        int largestNumberInVector;

    public:
        void pushBackInVector(int n)
        {
            numbers.push_back(n);
        }

        void showVector()
        {
            cout << "Numbers: ";
            for(int n : numbers)
            {
                cout << n << " ";
            }

            cout << endl;
        }

        int sum()
        {
            sumOfAllElements = 0;
            for(int i = 0; i < numbers.size(); i++)
            {
                sumOfAllElements += numbers[i];
            }
            return sumOfAllElements;
        }

        int average()
        {
            averageOfAllNumbers = 0;
            int sum = 0;
            for(int i = 0; i < numbers.size(); i++)
            {
                sum += numbers[i];
            }

            averageOfAllNumbers = (sum / numbers.size());
            // cout << numbers.size() << endl;
            return averageOfAllNumbers;
        }

        int smallesNumber()
        {
            smallestNumberInVector = numbers[0];
            for(int i = 1; i < numbers.size(); i++)
            {
                if(smallestNumberInVector > numbers[i])
                {
                    smallestNumberInVector = numbers[i];
                }
            }

            return smallestNumberInVector;
        }

        int biggestNumber()
        {
            largestNumberInVector = numbers[0];
            for(int i = 0; i < numbers.size(); i++)
            {
                if(largestNumberInVector < numbers[i])
                {
                    largestNumberInVector = numbers[i];
                }
            }
            return largestNumberInVector;
        }

};


int main()
{
    vectors v;
    v.pushBackInVector(10);
    v.pushBackInVector(30);
    v.pushBackInVector(40);
    v.pushBackInVector(20);

    v.showVector();


    cout << "Sum = " << v.sum() << endl;
    cout << "Average = " << v.average() << endl;
    cout << "Min = " << v.smallesNumber() << endl;
    cout << "Max = " << v.biggestNumber() << endl;
    
    return 0;
}