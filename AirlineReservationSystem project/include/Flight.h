#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flight
{
protected:
    string flightNumber;
    string origin;
    string destination;
    string departureDate;
    string departureTime;

    int totalSeats;
    int availableSeats;

public:
    // Constructor
    Flight(
        string flightNumber,
        string origin,
        string destination,
        string departureDate,
        string departureTime,
        int totalSeats,
        int availableSeats
    );

    // Virtual Destructor
    virtual ~Flight();

    // Getters
    string getFlightNumber() const;
    string getOrigin() const;
    string getDestination() const;
    string getDepartureDate() const;
    string getDepartureTime() const;

    int getTotalSeats() const;
    int getAvailableSeats() const;

    // Seat Management
    void reserveSeat();
    void releaseSeat();

    // Pure Virtual Functions
    virtual double calculateBaseFare() const = 0;
    virtual void displayDetails() const = 0;
};

#endif
