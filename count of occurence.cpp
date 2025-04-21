#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,4,5,7,7,7,8,8,4,4,1,1};
	vector<int>v(arr,arr+sizeof(arr)/sizeof(int));
	int target,c;
	cout<<"enter number";
	cin>>target;
	c=count(v.begin(),v.end(),target);
	cout<<"count:"<<c;
	return 0;
}
