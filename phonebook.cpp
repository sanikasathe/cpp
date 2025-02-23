#include<iostream>
using namespace std;
class Contact{
	private:
		string name[10];
		string ph_no[10];
	public:
		int count=0;
		void addcontact()
		{
			cout<<"enter name";
			cin>>name[count];
			cout<<"\n\nenter phone no.";
			cin>>ph_no[count];
			count++;
		}
		void display()
		{
			for(int i=0;i<count;i++)
			{
				cout<<"name:"<<name[i]<<", phone number:"<<ph_no[i]<<endl;
			}
		}
		
};
int main()
{

	Contact c;
	int choice;
	do{
		cout<<"1.Add contact"<<endl;
		cout<<"2.display contact"<<endl;
		cout<<"3.exit"<<endl;
		cout<<"enter choice";
		cin>>choice;
		switch (choice)
		{
			case 1:
				c.addcontact();
				break;
			case 2:
				c.display();
				break;
			case 3:
				break;
			default:cout<<"invalid choice"<<endl;
				
		}
		
	}while(choice!=3);

	
	return 0;
}
