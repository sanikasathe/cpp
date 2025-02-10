#include<iostream>
using namespace std;
//multilevel inheritance
class A{
	public:
		int num1,num2;
		void get1()
		{
			cout<<"enter 1ST number ";
			cin>>num1;
		}
	
};
class B:public A
{
	public:
		void get2()
		{
			cout<<"enter 2ND number ";
			cin>>num2;
		}
	
	
};
class C:public B
{	public:
	void sum()
		{
			cout<<"\naddition of two numbers "<<num1+num2;
		}
};

int main()
{
	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;	
}
