#include "../include/CharterFlight.h"

// Constructor
CharterFlight::CharterFlight(
    string flightNumber,
    string origin,
    string destination,
    string departureDate,
    string departureTime,
    int totalSeats,
    int availableSeats,
    string contractHolder,
    double fixedContractPrice
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
    this->contractHolder = contractHolder;
    this->fixedContractPrice = fixedContractPrice;
}

// Fare Calculation (fixed contract-based)
double CharterFlight::calculateBaseFare() const
{
    return fixedContractPrice;
}

// Display Details
void CharterFlight::displayDetails() const
{
    cout << "\n===== Charter Flight =====" << endl;

    cout << "Flight Number   : " << flightNumber << endl;
    cout << "Origin          : " << origin << endl;
    cout << "Destination     : " << destination << endl;
    cout << "Date            : " << departureDate << endl;
    cout << "Time            : " << departureTime << endl;
    cout << "Total Seats     : " << totalSeats << endl;
    cout << "Available       : " << availableSeats << endl;
    cout << "Contract Holder : " << contractHolder << endl;
    cout << "Fixed Price     : " << calculateBaseFare() << endl;
}
