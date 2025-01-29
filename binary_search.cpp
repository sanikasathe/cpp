#include<iostream>
using namespace std;

class search {
private:
    int a[100], size;

public:
    void input() {
        cout << "Enter the size of array: ";
        cin >> size;
        cout << "Enter the elements of array in sorted order: ";
        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }
    }

    int binary_search(int target) {
        int low = 0, high = size - 1;
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (a[mid] == target) {
                return mid;
            }
            else {
                if (a[mid] > target) {
                    high = mid - 1;  
                }
                else {
                    low = mid + 1;  
                }
            }
        }
        return -1;  
    }

    void display(int target) {
        int status = binary_search(target);
        if (status == -1) {
            cout << "Element " << target << " not found" << endl;
        }
        else {
            cout << "Element " << target << " found at index " << status << endl;
        }
    }
};

int main() {
    search s;
    s.input();
    int target;
    cout << "Enter target to search: ";
    cin >> target;
    s.display(target);

    return 0;
}

