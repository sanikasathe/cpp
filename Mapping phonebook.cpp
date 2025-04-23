#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	map<string, string>phonebook;
	phonebook["sanika"]="9856472321";
	phonebook["pranali"]="8895475230";
	string name;
	cout<<"enter name";
	cin>>\tname;
	if(phonebook.find(name)!=phonebook.end())
		cout<<name<<" : "<<	phonebook[name];
	else
		cout<<name<<" "<<"not found";
	return 0;
}
