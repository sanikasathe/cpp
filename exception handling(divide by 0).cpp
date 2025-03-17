#include<iostream>
using namespace std;
int main()
{
    float num1, num2, div;
    cout << "Enter 2 numbers for division: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw "divide by zero error!";
        }
        div = num1 / num2; 
        cout << "Answer = " << div << endl;
    }
    catch (const char* str) {
        cout << "Exception: " << str << endl;
    }

    return 0;
}

