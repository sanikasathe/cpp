#include <iostream>
using namespace std;
//template function
template <typename T1>
void swapValues(T1& a, T1& b) {
    T1 temp = a;
    a = b;
    b = temp;
}

//template class
template <typename T1>
class Box {
    T1 value;
public:
    Box(T1 val) {
        value = val;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    int x = 5;
    int y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    Box<int> b1(10);
    Box<double> b2(5.5);
    b1.display();
    b2.display();
    

    return 0;
}



