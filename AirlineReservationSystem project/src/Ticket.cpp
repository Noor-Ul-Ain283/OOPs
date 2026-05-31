#include "../include/Ticket.h"
#include <iostream>

using namespace std;

// ================= DEFAULT CONSTRUCTOR =================
Ticket::Ticket()
{
    ticketId = 0;
    flightNumber = "";
    passengerId = 0;
    seatNumber = 0;
    farePaid = 0.0;
    status = "Booked";
}

// ================= PARAMETERIZED CONSTRUCTOR =================
Ticket::Ticket(int ticketId,
               string flightNumber,
               int passengerId,
               int seatNumber,
               double farePaid,
               string status)
{
    this->ticketId = ticketId;
    this->flightNumber = flightNumber;
    this->passengerId = passengerId;
    this->seatNumber = seatNumber;
    this->farePaid = farePaid;
    this->status = status;
}

// ================= GETTERS =================
int Ticket::getTicketId() const
{
    return ticketId;
}

string Ticket::getFlightNumber() const
{
    return flightNumber;
}

int Ticket::getPassengerId() const
{
    return passengerId;
}

int Ticket::getSeatNumber() const
{
    return seatNumber;
}

double Ticket::getFarePaid() const
{
    return farePaid;
}

// ================= SET STATUS =================
void Ticket::setStatus(string status)
{
    this->status = status;
}

// ================= CANCEL TICKET =================
void Ticket::cancelTicket()
{
    status = "Cancelled";
}

// ================= OPERATOR == =================
bool Ticket::operator==(const Ticket& other) const
{
    return this->ticketId == other.ticketId;
}

// ================= OUTPUT OPERATOR =================
ostream& operator<<(ostream& os, const Ticket& t)
{
    os << "\n===== TICKET =====\n";
    os << "Ticket ID   : " << t.ticketId << endl;
    os << "Flight No   : " << t.flightNumber << endl;
    os << "Passenger ID: " << t.passengerId << endl;
    os << "Seat No     : " << t.seatNumber << endl;
    os << "Fare Paid   : " << t.farePaid << endl;
    os << "Status      : " << t.status << endl;
    return os;
}
