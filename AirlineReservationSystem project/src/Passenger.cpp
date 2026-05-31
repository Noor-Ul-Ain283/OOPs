#include "../include/Passenger.h"

// Constructor
Passenger::Passenger(int passengerId, string name, string passportOrCNIC)
{
    this->passengerId = passengerId;
    this->name = name;
    this->passportOrCNIC = passportOrCNIC;
}

// Destructor
Passenger::~Passenger()
{
}

// Getters
int Passenger::getPassengerId() const
{
    return passengerId;
}

string Passenger::getName() const
{
    return name;
}
