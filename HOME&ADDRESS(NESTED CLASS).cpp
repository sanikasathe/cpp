#include <iostream>
#include <string>
using namespace std;

class House {
    public:
        // Nested Address class
        class Address {
            public:
                string street;
                string city;
                string country;

                // Constructor to initialize address
                Address(string s, string c, string co) {
                    street = s;
                    city = c;
                    country = co;
                }

                // Function to display address
                void displayAddress() {
                    cout << "Street: " << street << endl;
                    cout << "City: " << city << endl;
                    cout << "Country: " << country << endl;
                }
        };

        string houseName;
        int houseSize;

        // Constructor to initialize house details
        House(string name, int size) {
            houseName = name;
            houseSize = size;
        }

        // Function to display house details
        void displayHouse() {
            cout << "House Name: " << houseName << endl;
            cout << "House Size: " << houseSize << " sq ft" << endl;
        }
};

int main() {
    // Create an object of House
    House myHouse("Dream Villa", 2000);

    // Create an object of Address (nested class)
    House::Address myAddress("123 Main St", "New York", "USA");

    // Display house details
    myHouse.displayHouse();

    // Display address details
    myAddress.displayAddress();

    return 0;
}
