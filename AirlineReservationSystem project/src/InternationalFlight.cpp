#include "../include/InternationalFlight.h"

// Constructor
InternationalFlight::InternationalFlight(
    string flightNumber,
    string origin,
    string destination,
    string departureDate,
    string departureTime,
    int totalSeats,
    int availableSeats,
    double internationalTax,
    bool visaRequired
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
    this->internationalTax = internationalTax;
    this->visaRequired = visaRequired;
}

// Fare Calculation
double InternationalFlight::calculateBaseFare() const
{
    double baseFare = 20000.0;
    return baseFare + internationalTax;
}

// Display Details
void InternationalFlight::displayDetails() const
{
    cout << "\n===== International Flight =====" << endl;

    cout << "Flight Number : " << flightNumber << endl;
    cout << "Origin        : " << origin << endl;
    cout << "Destination   : " << destination << endl;
    cout << "Date          : " << departureDate << endl;
    cout << "Time          : " << departureTime << endl;
    cout << "Total Seats   : " << totalSeats << endl;
    cout << "Available     : " << availableSeats << endl;
    cout << "Visa Required : " << (visaRequired ? "Yes" : "No") << endl;
    cout << "Fare          : " << calculateBaseFare() << endl;
}
