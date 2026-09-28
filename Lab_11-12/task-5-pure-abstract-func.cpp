#include <iostream>
using namespace std;

// Abstract class
class HospitalStaff
{
protected:
    string staffName;

public:
    // Constructor
    HospitalStaff(string name)
    {
        staffName = name;
    }

    // Pure virtual function
    virtual void performDuty() = 0;
};

// Derived class Doctor
class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " (Doctor) is treating patients." << endl;
    }
};

// Derived class Nurse
class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " (Nurse) is taking care of patients." << endl;
    }
};

// Derived class Receptionist
class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty()
    {
        cout << staffName << " (Receptionist) is managing appointments." << endl;
    }
};

int main()
{
    // Create objects
    Doctor d1("Nouhman");
    Nurse n1("AMNA");
    Receptionist r1("Hassan");

    // Call functions
    d1.performDuty();
    n1.performDuty();
    r1.performDuty();

    return 0;
}
