#include "../include/DomesticFlight.h"

// Constructor
DomesticFlight::DomesticFlight(
    string flightNumber,
    string origin,
    string destination,
    string departureDate,
    string departureTime,
    int totalSeats,
    int availableSeats,
    double domesticTax
)
    : Flight(
        flightNumber,
        origin,
        destination,
        departureDate,
        departureTime,
        totalSeats,
        availableSeats
      )
{
    this->domesticTax = domesticTax;
}

// Calculate Fare

double DomesticFlight::calculateBaseFare() const
{
    double baseFare = 10000.0;

    return baseFare + domesticTax;
}

// Display Details

void DomesticFlight::displayDetails() const
{
    cout << "\n===== Domestic Flight =====" << endl;

    cout << "Flight Number : " << flightNumber << endl;
    cout << "Origin        : " << origin << endl;
    cout << "Destination   : " << destination << endl;
    cout << "Date          : " << departureDate << endl;
    cout << "Time          : " << departureTime << endl;
    cout << "Total Seats   : " << totalSeats << endl;
    cout << "Available     : " << availableSeats << endl;
    cout << "Fare          : " << calculateBaseFare() << endl;
}
