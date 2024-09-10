#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string empid;
    float salary;
    float pr;
    float us;
   
public:
    float sal()
    {
        return pr;
    }
   
    void calculateRevisedSalary()
    {
        if (sal() >= 1.2)
        {
            us = salary + 10000;
        }
        else if (sal() >= 1.0 && sal() < 1.2)
        {
            us = salary + 8000;
        }
        else if (sal() >= 0.8 && sal() < 1.0)
        {
            us = salary + 6000;
        }
        else if (sal() >= 0.6 && sal() < 0.8)
        {
            us = salary + 4000;
        }
        else if (sal() >= 0.4 && sal() < 0.6)
        {
            us = salary + 2000;
        }
        else
        {
            us = salary + 1000;
        }
    }

    void input()
    {
        cout << "\n";
        cout << "Enter Employee Details: ";
        cout << "\n";
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "\n";
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Performance Rating [0 To 1.2]: ";
        cin >> pr;
        cout << "\n";
    }

    void show()
    {   
        cout << "\n";
        cout << "Employee Details: ";
        cout << "\n";
        cout << "\n";
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "\n";
        cout << "Initial Salary: " << salary << endl;
        cout << "Performance Rating: " << pr << endl;
        cout << "\n";
        cout << "Revised Salary: " << us << endl;
        cout << "\n";
    }
};

int main()
{
    Employee emp1;
    cout << "\n";
    emp1.input();
    emp1.calculateRevisedSalary();
    emp1.show();
    cout << "\n";
    
    return 0;
}
