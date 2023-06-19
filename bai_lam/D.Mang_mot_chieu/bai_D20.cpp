#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int t;
	cout<<"Nhap so bo test : ";cin>>t;
	int count_test = 1;
	while(t--)
{
    int n;
    cout<<"Nhap n : ";
    cin>>n;

    int arr[100];
    cout<<"Nhap n phan tu vao mang : ";
    for(int i = 0; i<n; i++)
	{
            cin>>arr[i];
    }
    
    cout<<"test "<<count_test<<endl;
	count_test++;
	//sap xep tang	 
	for(int i = n - 1; i>0; i--)
	{
		for(int j = 0; j < i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
    cout<<endl;
}
    return 0;
}