#include<iostream>
using namespace std;
class A{
	public:
		int num1,num2;
		void get()
		{
			cout<<"enter two numbers";
			cin>>num1>>num2;
		}
	
};
class B:public A
{
	public:
		void sum()
		{
			cout<<"\naddition of two numbers"<<num1+num2;
		}
	
};
int main()
{
	B obj;
	obj.get();
	obj.sum();
	return 0;	
}
