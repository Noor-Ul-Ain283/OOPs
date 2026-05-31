#ifndef ECONOMYPASSENGER_H
#define ECONOMYPASSENGER_H

#include "Passenger.h"

class EconomyPassenger : public Passenger
{
public:
    EconomyPassenger(int passengerId, string name, string passportOrCNIC);

    double refundPercentage() const;
    int baggageAllowance() const;
    double loyaltyMultiplier() const;

    void displayDetails() const;
};

#endif
