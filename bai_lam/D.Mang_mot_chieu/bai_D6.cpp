#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    	int n, arr[100];
    	cout<<"Nhap n : ";cin>>n;
    	while(n > 100)
    	{
    		cout<<"Nhap lai n nho hon 100 : ";cin>>n;
		}
    	for(int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
		}
		//Thuc hien dao nguoc mang
		for (int i = 0; i < n / 2; i++) 
		{
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        }
          cout << "Mang sau khi dao nguoc la: ";
         for (int i = 0; i < n; i++) 
		 {
            cout << arr[i] << " ";
         }	 	
	return 0;
}
