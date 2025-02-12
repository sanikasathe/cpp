#include<iostream> 
using namespace std;  
// Inner class 
class inner {
private:
    int A = 20; 
public:
    int ip = 50; 
    //getter function
    void getA() {
        cout << A << endl;  
    }
    // setter function
    void setA(int a) {
        A = a; 
    }
};
// Outer class 
class outer {
private:
    int B = 10;  
public:
    inner i2;  
    void getB() {
        cout << B << endl;    
        cout << i2.ip << endl;  // Accesses the 'ip' variable from the inner class and prints it
    }
    void setB(int b) {
        B = b;  
    }
};


int main() {
    inner i1;  
    outer o1; 
    i1.getA();  
    o1.getB(); 
    return 0;
}

