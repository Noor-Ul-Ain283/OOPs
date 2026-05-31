#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <string>
#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"

using namespace std;

class Airline
{
private:
    vector<Flight*> flights;
    vector<Passenger*> passengers;
    vector<Ticket> tickets;

    int nextTicketId;

public:
    Airline();

    // Flight
    void addFlight(Flight* flight);
    void listFlights();
    Flight* findFlight(string flightNumber);

    // Passenger
    void addPassenger(Passenger* passenger);
    void listPassengers();
    Passenger* findPassenger(int passengerId);

    // Booking
    void bookTicket(string flightNumber, int passengerId);

    // Tickets
    void listTickets();

    // FILE SYSTEM (FIX)
    void saveData();
    void loadData();

    // REPORT
    void revenueReport();
};

#endif
