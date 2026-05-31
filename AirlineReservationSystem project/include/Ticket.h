#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    int ticketId;
    string flightNumber;
    int passengerId;
    int seatNumber;
    double farePaid;
    string status;

public:
    Ticket();

    Ticket(int ticketId,
           string flightNumber,
           int passengerId,
           int seatNumber,
           double farePaid,
           string status);

    int getTicketId() const;
    string getFlightNumber() const;
    int getPassengerId() const;
    int getSeatNumber() const;
    double getFarePaid() const;

    void setStatus(string status);

    // ? ADD THIS (YOU WERE MISSING IT)
    void cancelTicket();

    // ? ADD THIS TOO
    bool operator==(const Ticket& other) const;

    friend ostream& operator<<(ostream& os, const Ticket& t);
};

#endif
