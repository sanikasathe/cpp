#include<iostream>
using namespace std;
class Shape{
	public:
		int radius=4;
		void display()
		{
			cout<<"radius is:"<<radius;
		}
	};
class Circle:public Shape
{
	public:
		void area()
		{
			cout<<"\n\nArea of circle is :"<<3.142*radius*radius;
		}
	
};
int main()
{
	Circle c;
	c.display();
	c.area();
	return 0;
}
