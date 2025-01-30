#include<iostream>
using namespace std;
class Armstrong{
	private:
		int num,original_num,remainder,result=0;
	public:
	void input()
	{
		cout<<"enter the 3 digit number";
		cin>>num;
		original_num=num;
	}
	void calculate()
	{
		while(original_num!=0)
		{
			remainder=	original_num%10;
			result+=remainder*remainder*remainder;
				original_num/=10;
		}
	}
	void display()
	{
		if(result==num)
		{
			cout<<num <<"is an armstrong";
		}
		else
		{
			cout<<num <<"is not an armstrong";
		}
	}
};
int main()
{
	Armstrong a;
	a.input();
	a.calculate();
	a.display();
	return 0;
}
