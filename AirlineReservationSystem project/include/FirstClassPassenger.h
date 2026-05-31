#ifndef FIRSTCLASSPASSENGER_H
#define FIRSTCLASSPASSENGER_H

#include "Passenger.h"

class FirstClassPassenger : public Passenger
{
public:
    FirstClassPassenger(int passengerId, string name, string passportOrCNIC);

    double refundPercentage() const;
    int baggageAllowance() const;
    double loyaltyMultiplier() const;

    void displayDetails() const;
};

#endif
