#include<iostream>
#include<string.h>
using namespace std;
class Youtube{
	private:
		string name;
		int subscribers;
	public:
		Youtube(string nm="unnamed",int sc=0):name(nm),subscribers(sc){
		};
	void setchannel(string cn,int ss)
	{
		subscribers=ss;
		name=cn;
	}
	void getchannel()
	{
		cout<<name<<endl;
		cout<<subscribers<<endl;
	}
	friend ostream& operator<<(ostream& COUT,Youtube& yto)
	{
		cout<<yto.name;
		return COUT;
	}
		
};
int main()
{
	Youtube yt1("Dkte",52000);
	cout<<yt1<<"\n hi";
	return 0;
}

