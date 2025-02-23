#include<iostream>
using namespace std;
class Squares{
	private:
		int num;
	public:
		//getter function
		void get()
		{
			cout<<"enter the number";
			cin>>num;
		}
		int Sum_of_sqaures()
		{
			int sum=0;
			for(int i=1;i<=num;i++)
			{
				sum+=i*i;
			}
			return sum;
		}
		void display()
		{
			cout<<"\n\nthe sum of sqauares of n numbers is:"<<Sum_of_sqaures();
		}
		
};
int main()
{
	Squares s;
	s.get();
	s.Sum_of_sqaures();
	s.display();
	return 0;
	
	
	
}
