#include<iostream>
using namespace std;
class Bank{
	private:
		int acc_no;
	     static int balance;

	public:
		class transaction{
		    private:
		    int amount;
			public:
			void deposit()
     		{
     			cout<<"The deposit amount ";
     			cin>>amount;
     			balance+=amount;
     			cout<<"The current balance "<<balance<<endl;
			}
			void withdraw()
     		{
     			cout<<"\nThe withdrawal amount ";
     			cin>>amount;
     			balance-=amount;
     			cout<<"The current balance"<<balance<<endl;
			}
			
		};
};
int Bank::balance=1000;
int main()
{
	Bank b1;
	Bank::transaction t1;
	t1.deposit();
	t1.withdraw();
}
