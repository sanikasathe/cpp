#include<iostream>
using namespace std;
//declaration of class
class Wall{
	private:
		int len;
		int ht;
	public:
		Wall() //default constructor
		{
			len=1;
			ht=1;
		}
		Wall(int x, int y) //parameteriazed constructor
		{
            len = x;
            ht = y;
        }
		Wall(const Wall& w ) // copy constructor
		{
            len=w.len;
            ht=w.ht;
        }
		 void getWallInfo()//getter function
        {
            cout << "Length: " << len << endl;
            cout << "Height: " << ht << endl;
        }
		void setWallInfo(int l,int h)//setter function
		{
			len=l;
			ht=h;	
		}
		
	
};
int main()
{
	Wall w1;//default constructor is called here
	cout << "Default wall dimensions:" << endl;
	w1.getWallInfo();
	
	
	Wall w2(6, 7);// parameteriazed constructor is called here
    cout << "\nParameterized wall dimensions:" << endl;
    w2.getWallInfo();
    
    
    Wall w3(w2);//copy constructor is called here
    cout << "\ncopy wall dimensions:" << endl;
    w3.getWallInfo();
    
    
    w1.setWallInfo(8,9);
	cout << "\nUpdated wall dimensions:" << endl;
	w1.getWallInfo();
	return 0;
	
	
}
