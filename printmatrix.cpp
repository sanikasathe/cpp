#include<iostream>
using namespace std;

class Matrix
{
	private:
		int rows, col;
		int matrix[100][100];
	public:
		void input()
		{
			cout << "Enter the number of rows: ";
			cin >> rows;
			cout << "Enter the number of columns: ";
			cin >> col;
			cout << "Enter the elements:\n";
			for(int i = 0; i < rows; i++)
			{
				for(int j = 0; j < col; j++)  
				{
					cin >> matrix[i][j];
				}
			}
		}

		void display()
		{
			cout << "The matrix is:\n";
			for(int i = 0; i < rows; i++)
			{
				for(int j = 0; j < col; j++) 
				{
					cout << matrix[i][j] << " ";
				}
				cout << endl;
			}
		}
};

int main()
{
	Matrix m;
	m.input();
	m.display();

	return 0;
}

