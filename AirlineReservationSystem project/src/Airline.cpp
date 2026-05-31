#include "../include/Airline.h"
#include <iostream>
#include <fstream>

using namespace std;

// ================= CONSTRUCTOR =================
Airline::Airline()
{
    nextTicketId = 1;
}

// ================= FLIGHTS =================
void Airline::addFlight(Flight* flight)
{
    flights.push_back(flight);
}

void Airline::listFlights()
{
    cout << "\n===== FLIGHTS =====\n";

    for (int i = 0; i < flights.size(); i++)
    {
        flights[i]->displayDetails();
        cout << "------------------\n";
    }
}

// ================= PASSENGERS =================
void Airline::addPassenger(Passenger* passenger)
{
    passengers.push_back(passenger);
}

void Airline::listPassengers()
{
    cout << "\n===== PASSENGERS =====\n";

    for (int i = 0; i < passengers.size(); i++)
    {
        passengers[i]->displayDetails();
        cout << "------------------\n";
    }
}

// ================= BOOKING =================
void Airline::bookTicket(string flightNumber, int passengerId)
{
    Flight* flight = NULL;
    Passenger* passenger = NULL;

    for (int i = 0; i < flights.size(); i++)
    {
        if (flights[i]->getFlightNumber() == flightNumber)
            flight = flights[i];
    }

    for (int i = 0; i < passengers.size(); i++)
    {
        if (passengers[i]->getPassengerId() == passengerId)
            passenger = passengers[i];
    }

    if (flight == NULL || passenger == NULL)
    {
        cout << "Invalid flight or passenger!\n";
        return;
    }

    if (flight->getAvailableSeats() <= 0)
    {
        cout << "Flight is full!\n";
        return;
    }

    flight->reserveSeat();

    Ticket t(nextTicketId++, flightNumber, passengerId,
             flight->getTotalSeats() - flight->getAvailableSeats(),
             flight->calculateBaseFare(),
             "Booked");

    tickets.push_back(t);

    cout << "Ticket Booked Successfully!\n";
}

// ================= TICKETS =================
void Airline::listTickets()
{
    cout << "\n===== TICKETS =====\n";

    for (int i = 0; i < tickets.size(); i++)
    {
        cout << tickets[i];
    }
}

// ================= SAVE =================
void Airline::saveData()
{
    ofstream f("data.txt");

    for (int i = 0; i < tickets.size(); i++)
    {
        f << tickets[i].getTicketId() << " "
          << tickets[i].getFlightNumber() << " "
          << tickets[i].getPassengerId() << endl;
    }

    cout << "Data saved!\n";
}

// ================= LOAD =================
void Airline::loadData()
{
    ifstream f("data.txt");

    cout << "Loading data...\n";

    int id, pid;
    string fn;

    while (f >> id >> fn >> pid)
    {
        cout << id << " " << fn << " " << pid << endl;
    }
}

// ================= REPORT =================
void Airline::revenueReport()
{
    double total = 0;

    for (int i = 0; i < tickets.size(); i++)
    {
        total += tickets[i].getFarePaid();
    }

    cout << "\nTotal Revenue: " << total << endl;
}
