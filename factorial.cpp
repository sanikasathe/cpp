// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class test{
    public:
        int fact(int n)
        {
            if(n==0)
            return 1;
            else
            return (n*fact(n-1));        
        }
    
           };
  int main()
  {
     int num;
    cout<<"enter the number";
    cin>>num;
    test a;
    cout<<"the factorial is:";
    cout<<a.fact(num); 
    
  }         
