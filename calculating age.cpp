#include<iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        // Constructor
        Person(string n, int a) {
            name = n;
            age = a;
        }

        // Getter function for name
        string getname() {
            return name;    
        }

        // Getter function for age
        int getage() {
            return age;
        }

        // Calculating age after 5 years
        int future_age() {
            return age + 5;
        }

        // Displaying message
        void display() {
            cout << "Hello, " << name << ". You will be " << future_age() << " years old after 5 years." << endl;
        }
};

int main() {
    string name;    
    int age;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your current age: ";
    cin >> age;
    
    // Creating an object of Person class
    Person person(name, age);
    
    // Calling functions
    person.getname();
    person.getage();
    person.future_age();
    person.display();
    
    return 0;
}

