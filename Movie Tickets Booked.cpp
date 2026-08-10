#include <iostream>
#include <string>
using namespace std;

class Ticket
{
public:
 string theaterName;
 int hallNo;
    int ticketNo;
    string movieName;
    string customerName;
    int seatNo;
    float price;
    bool booked;

public:
    // Constructor
    Ticket()
    {
        theaterName = "";
        hallNo = 0;
        ticketNo = 0;
        movieName = "";
        customerName = "";
        seatNo = 0;
        price =0;
        booked = false;
    }

    // Book ticket
    void bookTicket()
    {
        if (booked)
        {
            cout << "Seat is already booked!\n";
            return;
        }

        cout << "Enter Theater Name: ";
        cin.ignore();
        getline(cin, theaterName);

        cout << "Enter Hall Number: ";
        cin >> hallNo;

        cout << "Enter Ticket Number: ";
        cin >> ticketNo;

        cin.ignore();
        cout << "Enter Movie Name: ";
        getline(cin, movieName);

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        cout << "Enter Ticket Price: ";
        cin >> price;

        booked = true;

        cout << "\nTicket booked successfully!\n";
    }

    // Display ticket details
    void displayTicket()
    {
        if (!booked)
        {
            cout << "\n  Ticket is not booked.\n";
            return;
        }
cout << "====== Welcome to Entertainment Paradise Theater ======\n";
        cout << "\n----- Ticket Details -----\n";
        cout << "Theater Name  : " << theaterName << endl;
        cout << "Hall Number   : " << hallNo << endl;
        cout << "Ticket Number : " << ticketNo << endl;
        cout << "Movie Name    : " << movieName << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Seat Number   : " << seatNo << endl;
        cout << "Ticket Price  : Rs. " << price << endl;
        cout << "Status        : Booked\n";
    }

    // Cancel ticket
    void cancelTicket()
    {
        if (!booked)
        {
            cout << "\n  Ticket is not booked.\n";
            return;
        }

        booked = false;
        cout << "\nTicket cancelled successfully!\n";
    }
};

int main()
{
    Ticket ticket;
    int choice;

    do
    {
        cout << "\n====== Welcome to Entertainment Paradise Theater ======\n\n";
        cout << "\n============================\n";
        cout << "   SINGLE SCREEN CINEMA\n";
        cout << "   TICKET BOOKING SYSTEM\n";
        cout << "============================\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ticket.bookTicket();
            break;

        case 2:
            ticket.displayTicket();
            break;

        case 3:
            ticket.cancelTicket();
            break;

        case 4:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
