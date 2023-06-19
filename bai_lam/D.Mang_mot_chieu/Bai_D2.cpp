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
	//in ra so nguyen to	
	for (int i = 0; i < n; i++) 
    {
        bool isPrime = true;
        if (arr[i] < 2) 
        {
            isPrime = false;
        }
        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) 
        {
            cnt[arr[i]]++;
        }
    }
    for(int i = 0 ; i < n; i++)
    {
    	if(cnt[arr[i]] != 0 )
		{
			cout<<arr[i]<<" ";
			cnt[arr[i]]=0;
		 } 
	}
       cout<<endl;
	}	
	return 0;
}
