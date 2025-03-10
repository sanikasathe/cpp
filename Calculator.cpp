
#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;

    do {
        cout << "Simple Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            if (choice == 1)
                cout << "Result: " << num1 + num2 << endl;
            else if (choice == 2)
                cout << "Result: " << num1 - num2 << endl;
            else if (choice == 3)
                cout << "Result: " << num1 * num2 << endl;
            else if (choice == 4) {
                if (num2 != 0)
                    cout << "Result: " << (float)num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
            }
        } else if (choice != 5) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
