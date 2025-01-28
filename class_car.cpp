#include<iostream>
using namespace std;
class Car{
    private:
    string owner;
    string model;
    float mileage;
    string fueltype;
    public:
    void setInfo(string name,string md,float mil,string fuel)
    {
        owner=name;
        model=md;
        mileage=mil;
        fueltype=fuel;
    }
    void display()
    {
        cout<<owner<<endl;
        cout<<model<<endl;
        cout<<mileage<<endl;
        cout<<fueltype<<endl;
        
    }
};
int main()
{
  Car c;
  c.setInfo("SANIKA SATHE","MARUTI SUZUKI",22.05,"CNG");
  c.display(); 
    
}
    
    
    
    
    
