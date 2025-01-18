#include <iostream>
using namespace std;
int main(){
    int num1,num2,add,sub,mul,div,mod;
    cout<<"Enter Two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<endl<<endl;
    add = num1+num2;
    cout<<"Addition of Two numbers :"<<add<<endl;
    sub = num1-num2;
    cout<<"Substraction of Two numbers :"<<sub<<endl;
    mul = num1*num2;
    cout<<"Multiplication of Two numbers :"<<mul<<endl;
    div = num1/num2;
    cout<<"Division of Two numbers :"<<div<<endl;
    mod = num1%num2;
    cout<<"Modulo Division of Two numbers :"<<mod<<endl;
    return 0;
}
