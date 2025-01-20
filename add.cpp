#include<iostream>
using namespace std;
class arith
{
    public:
    int add(int a,int b)
    {
         cout<<"sum is :"<<a+b;
         return 1;
    }
    
};
int main()
{   
        int num1,num2;
        cout<<"enter the numbers:";
        cin>>num1>>num2;
        arith a;
        a.add( num1, num2);
       
    }
