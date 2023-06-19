#include <iostream>
#include <math.h>
using namespace std;
int cnt[100001];
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
		//thuc hien kiem tra mang doi xung
		bool is_dx = true;
		for(int i = 0; i <= n/2; i++)
		{	
			if(arr[i] != arr[n-i-1])
			{
				is_dx = false;
				break;
			}
			
			
		} 
		if(is_dx)
			{
				cout<<"YES";
                break;
			}
			else
			{
				cout<<"NO";
				break;
			}
		cout<<endl;
    } 	
	return 0;
}
