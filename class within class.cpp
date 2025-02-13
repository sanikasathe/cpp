#include<iostream>
using namespace std;
// Outer class
class Outer {
     private:
          int B = 10; 
     public:
     	
     class Inner { //nested class
    private:
        int A = 20; 
        
    public:
        int ip = 50; 
        
        void getA() {
            cout << "A = " << A << endl;
        }
        
        void setA(int a) {
            A = a;
        }
    };

    Inner i2; //nested class object
   
    void getB() {
        cout << "B = " << B << endl;
        cout << "ip (Inner class) = " << i2.ip << endl; // Accessing 'ip' from Inner class
    }
    void setB(int b) {
        B = b;
    }
};

int main() {
    Outer::Inner i1;  
    Outer o1;         
    i1.getA();       
    i1.setA(15);      
    i1.getA();       
    // accessing Inner class of  variable 'ip'
    o1.getB();        

    return 0;
}

