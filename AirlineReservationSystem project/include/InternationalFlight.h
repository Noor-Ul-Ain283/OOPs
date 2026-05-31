#ifndef INTERNATIONALFLIGHT_H
#define INTERNATIONALFLIGHT_H

#include "Flight.h"

class InternationalFlight : public Flight
{
private:
    double internationalTax;
    bool visaRequired;

public:
    InternationalFlight(
        string flightNumber,
        string origin,
        string destination,
        string departureDate,
        string departureTime,
        int totalSeats,
        int availableSeats,
        double internationalTax,
        bool visaRequired
    );

    double calculateBaseFare() const;
    void displayDetails() const;
};

#endif
