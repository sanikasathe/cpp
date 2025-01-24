#include<iostream>
using namespace std;

class test {
public:
    int arr[100];

    void bubble_sort(int arr[], int size) {
        int i, j, temp;
        for(i = 0; i < size - 1; i++) {
            for(j = 0; j < size - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void display(int arr[], int size) {
        cout << "Sorted Array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size, arr[100];
    cout << "Enter the size: ";
    cin >> size;
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    test a;
    a.bubble_sort(arr, size);
    a.display(arr, size);

    return 0;
}

    
    
    
    

