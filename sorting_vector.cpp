#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={6,5,4,8,2};
	vector<int> v(arr,arr+5);
	int c;
	sort(v.begin(),v.end());
	for(c=0;c<=5;c++)
	
	 cout<<v[c]<<" ";
	
	
	
}
