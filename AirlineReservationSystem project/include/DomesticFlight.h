#ifndef DOMESTICFLIGHT_H
#define DOMESTICFLIGHT_H

#include "Flight.h"

class DomesticFlight : public Flight
{
private:
    double domesticTax;

public:
    // Constructor
    DomesticFlight(
        string flightNumber,
        string origin,
        string destination,
        string departureDate,
        string departureTime,
        int totalSeats,
        int availableSeats,
        double domesticTax
    );

    // Override Virtual Functions
   double calculateBaseFare() const;
void displayDetails() const;
};

#endif
