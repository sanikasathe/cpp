#include<iostream>
#include<stdexcept> 
using namespace std;
int main()
{
	int age;
	cout<<"enter the age"<<endl;
	cin>>age;
	
	try{
		if(age<0)
		{
			throw out_of_range("invalid age!");
		}
		else if(age==0){
			
		throw out_of_range("zero age!");
		}
		cout<<"age:"<<age<<"is valid age";
	}
	catch(const out_of_range &str) {
        cout << "Exception: " << str.what() << endl;
    }


    return 0;
	
		
		    
}

	

