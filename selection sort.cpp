#include<iostream>
using namespace std;
class test {
public:
    int arr[100];

    void selectionsort(int arr[],int size)
{
	int i,j,temp=0; 
	for(i=0;i<size;i++)
	{
		for(j=i;j<size-1;j++)
		{
			if(arr[i]>arr[j+1]){
			
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
 void display(int arr[],int size) {
        cout << "Sorted Array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size, arr[100];
    cout << "Enter the size: ";
    cin >> size;
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    test a;
    a.selectionsort(arr, size);
    a.display(arr, size);

    return 0;
}

    
    
    
    

