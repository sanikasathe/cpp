#include <iostream>

using namespace std;

int main() {
    int n;

    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize largest to the first element
    int largest = arr[0];

    // Loop through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
