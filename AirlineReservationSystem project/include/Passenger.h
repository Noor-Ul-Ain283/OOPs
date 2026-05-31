#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

using namespace std;

class Passenger
{
protected:
    int passengerId;
    string name;
    string passportOrCNIC;

public:
    Passenger(int passengerId, string name, string passportOrCNIC);
    virtual ~Passenger();

    int getPassengerId() const;
    string getName() const;

    // Pure polymorphic functions (IMPORTANT FOR MARKS)
    virtual double refundPercentage() const = 0;
    virtual int baggageAllowance() const = 0;
    virtual double loyaltyMultiplier() const = 0;

    virtual void displayDetails() const = 0;
};

#endif
