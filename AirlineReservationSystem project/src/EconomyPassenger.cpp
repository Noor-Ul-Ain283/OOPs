#include "../include/EconomyPassenger.h"

EconomyPassenger::EconomyPassenger(int passengerId, string name, string passportOrCNIC)
    : Passenger(passengerId, name, passportOrCNIC)
{
}

// Economy: low benefits

double EconomyPassenger::refundPercentage() const
{
    return 50.0; // 50% refund
}

int EconomyPassenger::baggageAllowance() const
{
    return 20; // kg
}

double EconomyPassenger::loyaltyMultiplier() const
{
    return 1.0;
}

void EconomyPassenger::displayDetails() const
{
    cout << "\n===== Economy Passenger =====" << endl;
    cout << "ID   : " << passengerId << endl;
    cout << "Name : " << name << endl;
    cout << "CNIC : " << passportOrCNIC << endl;
}
