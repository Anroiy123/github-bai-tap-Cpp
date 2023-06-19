#include <iostream>
#include <math.h>
using namespace std;
int main ()
{       
    int n,arr[100];
    cout<<"nhap so phan tu N : ";cin>>n;
    while(n>100)
    {
    	cout<<"Nhap lai N : ";cin>>n;
	}
    cout<<"Nhap phan tu trong mang : ";
    for(int i = 0; i < n; i++)
    {
    	cin>>arr[i];
	}
	//Viet ra so xuat hien nhieu hon mot lan
    int count = 0 ;
    for (int i = n -1; i > 0; i--) 
	{
        count = 1; 
        for (int j = 0; j < i ; j++) 
		{
            if (arr[i] == arr[j]) 
			{ 
                count++; 
            }
        }
            if (count > 1) 
		    {
                cout << arr[i] << " ";
            }
    }
	return 0;
}
