#include<iostream>
using namespace std;
//declaration of class
class circle{
	public:
		float rad;
		float area;
		float circumference;
		//types of constructors:
		
	circle()//default constructor 
	{
		cout<<"enter the radius of circle\n";
		cin>>rad;
		area=3.142*rad*rad;
		circumference=2*3.142*rad;
		cout<<"\n\narea of circle:"<<area;
		cout<<"\n\ncircumference of circle:"<<circumference;
	}
	circle(int r1)//parameterized constructor
	{	rad=r1;
		area=3.142*rad*rad;
		circumference=2*3.142*rad;
		cout<<"\n\narea of circle"<<area;
		cout<<"\n\ncircumference of circle:"<<circumference;
	}
	circle(circle &obj)//copy constructor 
	{	rad=obj.rad;
		area=3.142*rad*rad;
		circumference=2*3.142*rad;
		cout<<"\n\narea of circle"<<area;
		cout<<"\n\ncircumference of circle:"<<circumference;
	}
	~circle()
	{
		cout<<"\n\ndestructor is running";
	}
	
};
int main()
{	int r;
	circle c1;
	cout<<"\n\nradius1:"<<c1.rad;
	circle c2(7);
	cout<<"\n\nradius2:"<<c2.rad;
	{
	circle c3(c2);
	cout<<"\n\nradius3:"<<c3.rad;
	}
	cout<<"\n\n main executed";
	return 0;
	
}
