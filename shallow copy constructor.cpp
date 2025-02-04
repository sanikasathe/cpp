#include<iostream>
using namespace std;
class ShallowCopy {
    int *ptr;

public:
    // Constructor to initialize ptr with a value
    ShallowCopy(int value) {
        ptr = new int; 
        *ptr = value;  
    }

    // Copy constructor (shallow copy)
    ShallowCopy(const ShallowCopy &obj) {
        ptr = obj.ptr;  
    }

    // Getter function to print the value
    void get() {
        cout << *ptr << endl; 
    }

    // Destructor
    ~ShallowCopy() {
        delete ptr;  
    }
};

int main() {
    ShallowCopy obj1(10); // Create an object 
    cout << "Object 1 value: ";
    obj1.get();  // Display value of obj1
    
    ShallowCopy obj2 = obj1; // Shallow copy of obj1
    cout << "Object 2 value (shallow copy of obj1): ";
    obj2.get();  // Display value of obj2

    return 0;
}

