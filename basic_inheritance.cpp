#include<iostream>
using namespace std;
class Animal//base class
{
	public:
		void eat()
		{
			cout<<"I do eat";
		}
};
class Dog:public Animal //class dog is publically inherited from Animal class
{  //derived class
	public:
		void bark()
		{
			cout<<"\n\nI do bark";
		}
	
};
int main()
{
	Dog d;
	d.eat();
	d.bark();
	return 0;
}

