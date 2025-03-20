#include<iostream>
using namespace std;
class BookBus {
private:
    string from_city;
    string to_city;
    int no_of_seats;

public:
   static int max_seats;

    BookBus(string s = "source", string d = "destination", int n = 1)
        : from_city(s), to_city(d), no_of_seats(n) {}

    void showBooking() {
        cout << "Enter the source to travel: " << from_city << endl;
        cout << "\nEnter the destination: " << to_city << endl;
        cout << "Enter no. of seats to be booked: " << no_of_seats << endl;
        cout<<"max seats\t"<<max_seats<<endl; 
    }
};
int BookBus::max_seats = 50;
int booked_seats = 40;
int main()
{    int no_of_ticket=25;
	BookBus b1("Gadhinglaj","kolhapur",25);
	b1.showBooking();
	try{
		if (no_of_ticket <= 0) {
            throw "Invalid number of tickets";
        }
           if (no_of_ticket + booked_seats > BookBus::max_seats ) {
            throw "No enough seats available.";
        }
         booked_seats += no_of_ticket; 
        int remaining_seats =  (BookBus::max_seats  - booked_seats)-no_of_ticket ;
         cout << "Seats booked : " << booked_seats << endl;
        cout << "You have successfully booked " << no_of_ticket << " ticket" << endl;
       
        cout << " remaining seats: " << remaining_seats << endl;
    }
    catch (const char* str) {
        cout << "Exception: " << str << endl;
    }

    return 0;
          
        
	}

