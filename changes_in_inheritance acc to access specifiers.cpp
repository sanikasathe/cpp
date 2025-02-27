#include<iostream>
using namespace std;
class base_class{
	private:
		int a=10;
	public:
		int b=20;
	protected:
		int c=30;
};
class derived_class : public base_class {
public:
    void display() {
        cout << "Value of a: " << a; // a is private
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
};

int main() {
    derived_class obj;
    obj.display();
    return 0;
}

