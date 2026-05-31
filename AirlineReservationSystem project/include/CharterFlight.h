#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight
{
private:
    string contractHolder;
    double fixedContractPrice;

public:
    CharterFlight(
        string flightNumber,
        string origin,
        string destination,
        string departureDate,
        string departureTime,
        int totalSeats,
        int availableSeats,
        string contractHolder,
        double fixedContractPrice
    );

    double calculateBaseFare() const;
    void displayDetails() const;
};

#endif
