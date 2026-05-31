#include "../include/BusinessPassenger.h"

BusinessPassenger::BusinessPassenger(int passengerId, string name, string passportOrCNIC)
    : Passenger(passengerId, name, passportOrCNIC)
{
}

double BusinessPassenger::refundPercentage() const
{
    return 75.0;
}

int BusinessPassenger::baggageAllowance() const
{
    return 40;
}

double BusinessPassenger::loyaltyMultiplier() const
{
    return 1.5;
}

void BusinessPassenger::displayDetails() const
{
    cout << "\n===== Business Passenger =====" << endl;
    cout << "ID   : " << passengerId << endl;
    cout << "Name : " << name << endl;
    cout << "CNIC : " << passportOrCNIC << endl;
}
