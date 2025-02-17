#include<iostream>
using namespace std;
//function overiding
class Parent{
	public:
		void f1()
		{
			cout<<"In parent class";
			
		}
};
class Child:public Parent
{
	public:
		void f1()
		{
			cout<<"\n\nIn child class";
			
		}
};
int main()
{
	Parent p;
	p.f1();
	Child c;
	c.f1();
	return 0;
}


