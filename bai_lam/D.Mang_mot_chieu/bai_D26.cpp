#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int cnt[10000001];
int main ()
{
	int t;
	cout<<"Nhap so bo test: ";cin>>t;
	while(t--)
	{
	   int n;
       cout<<"Nhap N: ";
       cin>>n;

       int arr[n];
       cout<<"Nhap N phan tu vao mang : ";
       for(int i = 0; i<n; i++) {cin>>arr[i];}
       //sap xep mang theo thu tu tang dan
       for(int i = n-1; i>0; i--)
       {
       	for(int j = 0; j<i; j++)
       	{
       		if(arr[j]>arr[j+1])
       		{
       		int tmp = arr[j];
       		    arr[j] = arr[j+1];
       		    arr[j+1] = tmp;
       		}
		}
	   }
       //cout cac so chan
       for(int i = 0; i < n; i++)
       {
       	    if(arr[i] % 2 == 0)
       	    {
       	    	cnt[arr[i]]++;
			}
	   }		   	
	   for(int i = 0; i < n; i++)
	   {
	   	if(cnt[arr[i]] >= 1)
	   	{
	   		cout<<arr[i]<<" ";
            cnt[arr[i]]=0;
		}	   	
	   }
	   //cout cac so le
	   for(int i = 0; i < n; i++)
       {
       	    if(arr[i] % 2 != 0)
       	    {
       	    	cnt[arr[i]]++;
			}
	   }
	   for(int i = 0; i < n; i++)
	   {
	   	if(cnt[arr[i]] >= 1)
	   	{
	   		cout<<arr[i]<<" ";
            cnt[arr[i]]=0;
		}	   	
	   }
        cout<<endl;
	} 
    return 0;
}