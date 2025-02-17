#include<iostream>
using namespace std;
//function overloading
class shapes{
	public:
		float a;
		void area(int r)
		{
			a=r*r*3.142;
			cout<<"area of circle="<<a;
		}
		void area(int l,int b)
		{
			a=l*b;
			cout<<"\n\narea of rectangle="<<a;
		}
		void area(int h,float w)
		{
			a=0.5*h*w;
			cout<<"\n\narea of triangle="<<a;
		}
		
};
int main()
{	int a=8;
	float b=4.5;
	shapes s;
	s.area(5);
	s.area(4,5);
	s.area(a,b);
	return 0;
}
