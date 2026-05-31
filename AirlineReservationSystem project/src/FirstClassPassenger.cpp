#include "../include/FirstClassPassenger.h"

FirstClassPassenger::FirstClassPassenger(int passengerId, string name, string passportOrCNIC)
    : Passenger(passengerId, name, passportOrCNIC)
{
}

double FirstClassPassenger::refundPercentage() const
{
    return 90.0;
}

int FirstClassPassenger::baggageAllowance() const
{
    return 60;
}

double FirstClassPassenger::loyaltyMultiplier() const
{
    return 2.0;
}

void FirstClassPassenger::displayDetails() const
{
    cout << "\n===== First Class Passenger =====" << endl;
    cout << "ID   : " << passengerId << endl;
    cout << "Name : " << name << endl;
    cout << "CNIC : " << passportOrCNIC << endl;
}
