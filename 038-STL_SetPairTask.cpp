/* 
    # Create a program that:
    1. Uses a set<int> to store unique sensor readings entered by the user
    2. Prints all readings in sorted order
    3. Stores pair<string, int> (like "Temperature", value) in a vector
    4. Display all sensor reading with names.

    # Example Output:
    =========================================================
    Enter 5 sensor readings: 10, 20, 10, 30, 40
    Unique reading (sorted): 10, 20, 30, 40

    Sensor Data:
    Temperature -> 30
    Humidity -> 65
    Presssure -> 1013
    =========================================================

    # Hints:
    -> Use set<int> readings;
    -> Use vector<pair<string, int>> sensor;
    -> Loop Using for (auto it : container)
*/

#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<limits>

using namespace std;

class setPair
{
    private:
        set<int> readings;
        int input;
        vector<pair<string, int>> sensors;
        string mainSensorName;
        int mainSensorValue;
        
    public:
        void setReading()
        {
            cout << "Enter 5 sensor readings: ";
            for(int i = 0; i < 5; i++)
            {
                input = 0;
                cin >> input;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid Input Only Numeric Numbers: ";
                    cin >> input;
                }
                readings.insert(input);
            }
        }

        void getReadings() const
        {
            cout << "Unique reading (Sorted): ";
            for(const auto& r: readings)
            {
                cout << r << " ";
            }
        }

        void setSensorReadings()
        {
            cout << "Enter Sensor Name: ";
            cin >> mainSensorName;
            cout << endl;
            cout << "Enter Sensor Value: ";
            cin >> mainSensorValue;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Input enter numbers only: ";
                cin >> mainSensorValue;
            }
            cout << endl;
            
            sensors.push_back({mainSensorName, mainSensorValue});
        }

        void getSensorReadings() const
        {
            for(const auto& p : sensors)
            {
                cout << p.first << " -> " << p.second << endl;
            }
        }
};

int main()
{
    setPair p1;
    p1.setReading();
    p1.getReadings();

    p1.setSensorReadings();
    p1.getSensorReadings();
    p1.setSensorReadings();
    p1.getSensorReadings();
    p1.setSensorReadings();
    p1.getSensorReadings();



    return 0;
}
