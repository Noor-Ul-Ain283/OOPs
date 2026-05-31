#include "../include/Airline.h"
#include "../include/DomesticFlight.h"
#include "../include/InternationalFlight.h"
#include "../include/CharterFlight.h"
#include "../include/EconomyPassenger.h"
#include "../include/BusinessPassenger.h"
#include "../include/FirstClassPassenger.h"

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "\n==============================\n";
    cout << "   AIRLINE RESERVATION SYSTEM \n";
    cout << "==============================\n";
    cout << "1. Show Flights\n";
    cout << "2. Show Passengers\n";
    cout << "3. Book Ticket\n";
    cout << "4. Show Tickets\n";
    cout << "5. Save Data\n";
    cout << "6. Load Data\n";
    cout << "0. Exit\n";
    cout << "Enter choice: ";
}

int main()
{
    Airline airline;

    // SAMPLE DATA (initial)
    airline.addFlight(new DomesticFlight("PK101","Islamabad","Karachi","2026-07-01","09:00",150,150,1000));
    airline.addFlight(new InternationalFlight("PK201","Lahore","Dubai","2026-07-02","14:00",180,180,5000,true));
    airline.addFlight(new CharterFlight("CH301","Islamabad","Skardu","2026-07-05","08:00",50,50,"Govt Dept",300000));

    airline.addPassenger(new EconomyPassenger(1,"Ali","12345"));
    airline.addPassenger(new BusinessPassenger(2,"Ahmed","67890"));
    airline.addPassenger(new FirstClassPassenger(3,"Sara","11111"));

    int choice;

    do
    {
        showMenu();
        cin >> choice;

        if (choice == 1)
        {
            airline.listFlights();
        }
        else if (choice == 2)
        {
            airline.listPassengers();
        }
        else if (choice == 3)
        {
            string flightNo;
            int pid;

            cout << "Enter Flight Number: ";
            cin >> flightNo;

            cout << "Enter Passenger ID: ";
            cin >> pid;

            airline.bookTicket(flightNo, pid);
        }
        else if (choice == 4)
        {
            airline.listTickets();
        }
        else if (choice == 5)
        {
            airline.saveData();
        }
        else if (choice == 6)
        {
            airline.loadData();
        }
        else if (choice == 0)
        {
            cout << "Exiting system...\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
