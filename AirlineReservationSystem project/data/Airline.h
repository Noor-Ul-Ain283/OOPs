#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <memory>
#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"

class Airline
{
private:
    vector<shared_ptr<Flight>> flights;
    vector<shared_ptr<Passenger>> passengers;
    vector<Ticket> tickets;

    int nextTicketId = 1;

public:
    // Flight management
    void addFlight(shared_ptr<Flight> flight);
    void listFlights() const;

    shared_ptr<Flight> findFlight(string flightNumber);

    // Passenger management
    void addPassenger(shared_ptr<Passenger> passenger);
    void listPassengers() const;

    shared_ptr<Passenger> findPassenger(int passengerId);

    // Booking system
    void bookTicket(string flightNumber, int passengerId);

    // Ticket display
    void listTickets() const;
};

#endif
