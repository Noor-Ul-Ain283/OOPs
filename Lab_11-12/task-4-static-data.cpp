#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;

public:
    // it is Static variable
    static string companyName;

    // here we make Constructor
    Employee(int id, string name)
    {
        employeeID = id;
        employeeName = name;
    }

    // Display employee details
    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Company Name: " << companyName << endl;
        cout << endl;
    }

    // Static member function
    static void displayCompanyInfo()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

// Initialize static variable
string Employee::companyName = "Tech Solutions Ltd";

int main()
{
    // here we Create objects
    Employee emp1(101, "Ali");
    Employee emp2(102, "Noor");
    Employee emp3(103, "Ayesha ");

    // Display employee details
    emp1.display();
    emp2.display();
    emp3.display();

    // here we Access static function using class name
    Employee::displayCompanyInfo();

    return 0;
}
