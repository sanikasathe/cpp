#include<iostream>
using namespace std;

class Point{
	private:
		int x_cordinate, y_cordinate;
	public:
		// Fixed constructor 
		Point(int x = 0, int y = 0) : x_cordinate(x), y_cordinate(y) {}

		// Overload the subtraction operator
		Point operator -(Point& obj)
		{
			return Point(x_cordinate - obj.x_cordinate, y_cordinate - obj.y_cordinate);
		}

		//  display coordinates
		void show()
		{
			cout << "X: " << x_cordinate << endl;
			cout << "Y: " << y_cordinate << endl;
		}
};

int main()
{
	Point p1(5, 10), p2(3, 6);
	Point p3 = p1 - p2;  
	p3.show();  
	return 0;
}

