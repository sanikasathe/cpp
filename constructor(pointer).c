
#include<iostream>
using namespace std;
class test{
	int *p;
	public:
		void getInfo()//getter function
		{
			cout<<*p<<endl;
		}
		void setInfo(int s)//setter function
		{
			
			*this->p=s;
		}
		test(int x)//parameterized function
		{
			p=new int(x);	
		}
	
		test(const test& obj)//deep constructor
		{
			p=new int(*(obj.p));
		}
		~test()//destructor is called
		{
			delete p;
			cout<<"destructor"<<endl;
		}
		
		
};
int main()
{
	test t1(111);//parameterized constructor 
	t1.getInfo();
	test t2(t1);//deep constructor is called
	t2.getInfo();
	t2.setInfo(222);
	t2.getInfo();
	return 0;
}
