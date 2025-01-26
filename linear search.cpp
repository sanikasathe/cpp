#include<iostream>
using namespace std;

class test {
public:
    int arr[100];
    
    int linear_search(int arr[], int size, int target) {
        for(int i = 0; i < size; i++) {
            if(arr[i] == target) {
                return i; 
            }
        }
        return -1;
    }
};

int main() {
    int size, arr[100], target;
    cout << "Enter the size: ";
    cin >> size;
    
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target to search: ";
    cin >> target;

    test a;
    int result = a.linear_search(arr, size, target);
    
    if(result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
