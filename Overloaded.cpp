#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers (overloaded function)
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int result1 = add(10, 20); // Calls the first add function (two arguments)
    int result2 = add(10, 20, 30); // Calls the second add function (three arguments)

    cout << "Sum of two integers: " << result1 << endl;
    cout << "Sum of three integers: " << result2 << endl;

    return 0;
}
