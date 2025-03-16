#include<iostream>
using namespace std;
class Shape{
	public:
		//pure virtual function
			virtual void draw()=0;
};
	
class Circle:public Shape{
		public:
			void draw()
			{
				cout<<"drawing a circle";
			}
	};
class Rectangle:public Shape{
		public:
		void draw()
			{
				cout<<"\n\ndrawing a Rectangle";
			}
	
};
int main()
{
	Circle circle;
	Rectangle rectangle;
	circle.draw();
	rectangle.draw();
	return 0;
}
	

