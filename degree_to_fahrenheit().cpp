#include<iostream>
using namespace std;
class temperature{
	private:
		float temp;
	public:
		void get()
		{
			cout<<"enter tempearture in celcius";
			cin>>temp;
		}
		void celcius_to_fahrenheit()
		{
			float fahrenheit;
			fahrenheit=(temp*9/5)+32;
			cout<<"\n\ntempearture in fahrenheit is:"<<fahrenheit;
		}
};
int main()
{
	temperature t;
	t.get();
	t.celcius_to_fahrenheit();
	return 0;
}
