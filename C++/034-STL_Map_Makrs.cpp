#include<iostream>
#include<map>
#include<limits>

using namespace std;

class student
{
    private:
        map<string, int> marks;

    public:

        // Add Entries
        void addEntries(const string& local_name, int local_marks)
        {
            marks[local_name] = local_marks;
        }

        // Display all entries(sorted automatically)
        void displayAllEntries() const 
        {
            for(const auto pair : marks)
            {
                cout << pair.first << " -> " << pair.second << endl;
            }
        }

        // Search marks of entered student
        void searchStudentsMarks(const string& s_name) const 
        {
            auto it = marks.find(s_name); // Search key

            if(it != marks.end())
            {
                cout << "Found: " << it->first << " -> " << it->second;
            }
            else
            {
                cout << "Key not found" << endl; 
            }

        }

        // Delete a name
        void deleteName(const string& d_name)
        {
            auto it = marks.find(d_name);

            if(it != marks.end())
            {
                marks.erase(it);
                cout << "Key Value pair for " << d_name << "Deleted!" << endl;
            }
            else
            {
                cout << "Key not Found!!"<< endl;
            }
        }

        // Show the total Number of students
        int showTotalNoOfStudents() const 
        {
            return marks.size();
        }

};

int main()
{
    // Variable decalartions
    int choice , _marks_, _TotalCount_;
    string _name_;
    student s1;
    
    // Code

    // User istructions:
    do
    {
        cout << "1. Add Marks\n2. Display All\n3. Search\n4. Delete\n5. Count\n6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter a Choice: ";
            cin >> choice;
        }

        switch(choice)
        {
            case 1:
                cout << "Enter Name and Marks: ";
                cin >> _name_ >> _marks_;
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Enter Valid marks :";
                    cin >> _marks_;
                }
                s1.addEntries(_name_, _marks_);
                break;

            case 2:
                cout << "All Entries: " << endl;
                s1.displayAllEntries();
                break;
            
            case 3:
                cout << "Enter Name: ";
                cin >> _name_;
                s1.searchStudentsMarks(_name_);
                break;

            case 4:
                cout << "Enter a Name: ";
                cin >> _name_;
                s1.deleteName(_name_);
                break;

            case 5:
                _TotalCount_ = s1.showTotalNoOfStudents();
                cout << "Total count of Students = " << _TotalCount_ << endl; 
                break;
        }

        cout << "\n==========================================\n";
    }while(choice != 6);
    return 0;
}