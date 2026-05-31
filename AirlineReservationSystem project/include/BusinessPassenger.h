#ifndef BUSINESSPASSENGER_H
#define BUSINESSPASSENGER_H

#include "Passenger.h"

class BusinessPassenger : public Passenger
{
public:
    BusinessPassenger(int passengerId, string name, string passportOrCNIC);

    double refundPercentage() const;
    int baggageAllowance() const;
    double loyaltyMultiplier() const;

    void displayDetails() const;
};

#endif
