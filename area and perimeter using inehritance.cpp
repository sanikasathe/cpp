#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};

class Area_Perimeter : public Rectangle {
public:
    void calculate() {
        int area = length * width;
        int perimeter = 2 * (length + width);
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main() {
    Area_Perimeter obj;
    obj.input();
    obj.calculate();
    return 0;
}

