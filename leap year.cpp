#include<iostream>
using namespace std;
class Leapyear{
	private:
		int year;
	public:
		void input()
		{
			cout<<"enter the year";
			cin>>year;
		}
		void leap()
		{
			if(year%4==0&&year%100!=0||year%400==0)
			{
				cout<<"the year is leap year";
			}
			else
			{
					cout<<"the year is not leap year";
			}
		}
};
int main()
{
	Leapyear l;
	l.input();
	l.leap();
	return 0;
	
}
