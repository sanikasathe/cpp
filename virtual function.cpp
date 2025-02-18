#include<iostream>
using namespace std;
//function overiding
class Parent{
	public:
	virtual	void f1()
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
	Parent *p;//parent class object must always pointer obj
	Child c;
	p=&c;
	p->f1();//display child class
	return 0;
}


