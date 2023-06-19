#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int t;
	cout<<"Nhap so bo test : ";cin>>t;
	while (t--)
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
		//thuc hien tim so lon nhat
		int max = 0;
		for(int i=0; i < n; i++)
		{		

			if(arr[i]>max)
			{
				max = arr[i];
			}			
		}
		cout<<max<<endl;	
		int locate = 0 ;
		for(int i=0; i<n ;i++)
		{
			if(arr[i] == max)
			{
				cout<<i<<" ";
			}					
		}				
		cout<<endl;
    } 	
	return 0;
}
