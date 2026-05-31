#include "../include/Flight.h"
#include <iostream>

using namespace std;

// ===================== CONSTRUCTOR =====================
Flight::Flight(string flightNumber,
               string origin,
               string destination,
               string departureDate,
               string departureTime,
               int totalSeats,
               int availableSeats)
{
    this->flightNumber = flightNumber;
    this->origin = origin;
    this->destination = destination;
    this->departureDate = departureDate;
    this->departureTime = departureTime;
    this->totalSeats = totalSeats;
    this->availableSeats = availableSeats;
}

// ===================== DESTRUCTOR =====================
Flight::~Flight()
{
    // clean up if needed (safe empty destructor)
}

// ===================== GETTERS =====================
string Flight::getFlightNumber() const
{
    return flightNumber;
}

int Flight::getTotalSeats() const
{
    return totalSeats;
}

int Flight::getAvailableSeats() const
{
    return availableSeats;
}

// ===================== SEAT MANAGEMENT =====================
void Flight::reserveSeat()
{
    if (availableSeats > 0)
    {
        availableSeats--;
    }
    else
    {
        cout << "ERROR: No seats available!" << endl;
    }
}

// ===================== PURE VIRTUAL FUNCTIONS =====================
// (These are implemented in derived classes, not here)
// So NO displayBasic() or extra functions here
