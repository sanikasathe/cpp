#include<iostream>
#include<string.h>
using namespace std;
class Reverse{
	private:
		string str;
		int start=0;
		int end;
		
	public:
		void input()
		{
			cout<<"enter the string\n\n";
			cin>>str;
			end = str.length() - 1;
			cout<<"\n\nprint string length:"<<end;
		}
		void reverse()
		{
			while(start<end)
			{
				int temp;
				temp=str[start];
				str[start]=str[end];
				str[end]=temp;
				start++;
				end--;
			}
		cout<<"\n\nthe reverse string is :"<<str;	
		}
};
int main()
{	string str;
	Reverse r;
	r.input();
	r.reverse();
	return 0;
	
	}


