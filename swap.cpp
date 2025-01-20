#include<iostream>
using namespace std;
class test{
    public:
    int swap(int a,int b)
    {   int tmp;
        tmp=a;
        a=b;
        b=tmp;
        cout<<"after swapping values are:"<<"num1="<<a<<":"<<"num2="<<b<<endl; 
        return 0;
    }
 };
    int main()
    {
       int num1,num2;
       cout<<"enter the numbers:";
        cin>>num1>>num2;
        test t;
        cout<<"before swapping values are:"<<"num1="<<num1<<":"<<"num2="<<num2<<endl;
        t.swap(num1,num2); 
        
    } 
