#include <iostream>
using namespace std;

class Student
{
    private: 
    float per;
    float agg;
    float sum;
    string name;
    string clss;
    int roll;
    float eng;
    float hind;
    float math;
    float sci;
    float phy;

    public:
    float ctotal()
    {
        return sum = eng + math + sci + hind + phy;
    }

    float aggregate()
    {
        return agg = sum / 500.0;
    }
    
    float avg()
    {
        return per = aggregate() * 100; 
    }

    void grade()
    {
        if (avg() >= 90)
        {
             cout << "Grade A " << endl;
        }
        else if (avg() >= 70 && avg() <= 90)
        {
             cout << "Grade B" << endl;
        }
        else if (avg() >= 50 && avg() <= 70)
        {
            cout << "Grade C" << endl;
        }
        else if (avg() >= 30 && avg() <= 50)
        {
            cout << "Grade D" << endl;
        }
    }

    void input()
    {
        cout << "\n";
        cout << "ENTER STUDENT DETAILS: " << endl;
        cout << "\n";
        cout << "Enter Name Of The Student: ";
        cin >> name;
        cout << "Enter Class Of The Student: ";
        cin >> clss;
        cout << "Enter Roll Number Of The Student: ";
        cin >> roll;
        cout << "\n";
        cout << "Enter Marks In English: ";
        cin >> eng;
        cout << "Enter Marks In Hindi: ";
        cin >> hind;
        cout << "Enter Marks In Maths: ";
        cin >> math;
        cout << "Enter Marks In Science: ";
        cin >> sci;
        cout << "Enter Marks In Physics: ";
        cin >> phy;
        cout << "\n";
    }

    void show()
    {
       cout << "\n";
       cout << "STUDENT DETAILS: " << endl;
       cout << "\n";
       cout << "Name Of The Student: " << name << endl;
       cout << "Class Of The Student: " << clss << endl;
       cout << "Roll Number Of The Student: " << roll << endl;
       cout << "\n";
       cout << "Marks In English: " << eng << endl;
       cout << "Marks In Hindi: " << hind << endl;
       cout << "Makrs In Maths: " << math << endl;
       cout << "Makrs In Science" << sci << endl;
       cout << "Marks In Physics: " << phy << endl;
       cout << "\n";
       cout << "Total Marks: " << ctotal() << endl;
       cout << "Your Total Percentage: " << avg() << endl;
       cout << "\n";
    }

};

int main()
{
    Student stu1;
    stu1.input();
    stu1.show();
    stu1.ctotal();
    stu1.avg();
    stu1.grade();
    cout << "\n";
}