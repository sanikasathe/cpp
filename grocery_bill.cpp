#include<iostream>
using namespace std;
    int main()
    {
        string items[10];
        float bill;
        int i;
        int price[10];
        for(i=0;i<3;i++)
        {
            cout<<"enter name of item:";
            cin>>items[i];
            cout<<"enter price:";
            cin>>price[i];
            bill=bill+price[i];

        }
        for(i=0;i<3;i++)
        {
            cout<<items[i]<<"\t"<<"\t"<<"\t"<<price[i]<<endl;
        }
        cout<<"--------------------"<<endl;
        cout<<"total bill:"<<"\t"<<"\t"<<bill;
        
        return 0;
    }
