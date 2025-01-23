// Online C++ compiler to run C++ program online
#include<iostream>
#include<iomanip>

using namespace std;
const int MAX = 100;
int tbalance=0;
int arr[MAX];
int transactioncount=0;

void addamount(int add)
{
	tbalance+=add;
	cout<<"amount added succesfully\n";
	
	if(transactioncount<MAX)
	{
		arr[transactioncount++]=add;
	}
	else
	{
		cout<<"transaction history is full \n";
	}
	
}

void removeamount(int remove)
{
	if(tbalance< remove)
	{
		cout<<"insufficient balance\n";
	}
	else
	{
		tbalance-=remove;
		cout<<"amount removed succesfully \n";
		if (transactioncount < MAX) {
            arr[transactioncount++] = -remove; 
        } else {
            cout << "Transaction history is full!\n";
        }
	
	}
}
void transaction()
{
	if(transactioncount == 0)
	{
		cout<<"no transaction history found \n";
	}
	else
	{
		for (int i = 0; i < transactioncount; i++) {
            if (arr[i] > 0) {
                cout << "+" <<setw(10)<< arr[i] << "\n"; 
        }
			else {
                cout <<"-"<<setw(10)<< arr[i] <<"\n"; 
            }
        }
	}
	
}

int main()
{
	int option,add,remove;
	do{
	cout<<"\nchoose the below option :"<<endl<< "1.Add amount\n"<<"2.Remove amount\n"<<"3.check balance\n"<<"4.show past transaction \n";
	cin>>option;
	
	switch(option)
	{
		case 1 :
			cout<<"enter the amount to add :";
			cin>>add;
			addamount(add);
			break;
		case 2 :
			cout<<"enter the amount to remove :";
			cin>>remove;
			removeamount(remove);
			break;
		case 3 :
			cout<<"Your total balance is :  \n"<< tbalance;
			break;
		case 4 :
			cout<<"Your transaction history is :\n";
			transaction();
			break;
		default :
			cout<<"invalid input\n";	
		
	}
   }  while(option !=4);
   
    return 0;

	
	
}
