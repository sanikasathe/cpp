#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"sum is:"<<add(4,5)<<endl;
	cout<<"sum is:"<<add(2.5,5.6);
}
