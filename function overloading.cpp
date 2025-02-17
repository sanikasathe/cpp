#include<iostream>
using namespace std;
class shapes{
	public:
		float a;
		void area(int r)
		{
			a=r*r*3.142;
			cout<<"area of circle="<<a;
		}
			void area(int l,int b)
		{
			a=l*b;
			cout<<"\n\narea of rectangle="<<a;
		}
};
int main()
{
	shapes s;
	s.area(5);
	s.area(4,5);
	return 0;
}
