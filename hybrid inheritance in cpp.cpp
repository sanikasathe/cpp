#include<iostream>
using namespace std;
//hierachial inheritance
class A{
	public:
		int num1,num2;
		void get()
		{
			cout<<"\nenter two numbers ";
			cin>>num1>>num2;
		}
	
};
class B:virtual public A
{	
	public:
		int s;
		void sum()
		{
			s=num1+num2;
		}
	
};
class C:virtual public A
{
	public:
		int d;
		void diff()
		{
			d=num1-num2;	
		}
	
};
class D:public B,public C
{
	public:
		void display()
		{	cout<<"\naddition of two numbers "<<s;	
			cout<<"\nsubstraction of two numbers "<<d;	
		}
};
int main()
{	D obj3;
	obj3.get();
	obj3.sum();
	obj3.diff();
	obj3.display();
	return 0;	
}
