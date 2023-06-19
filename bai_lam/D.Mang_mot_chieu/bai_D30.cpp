#include <iostream>
using namespace std;
int cnt[10000];
int main() 
{
	int t;
	cout<<"Nhap so bo test: ";cin>>t;
	int count_test = 1;
	while(t--)
	{
		 int n;cout<<"Nhap n: ";cin>>n;
		 int a[n];cout<<"Nhap vao mang A: ";for(int i=0; i<n; i++) {cin>>a[i];}
		 int b[n];cout<<"Nhap vao mang B: ";for(int i=0; i<n; i++) {cin>>b[i];}
		 //sap xep a theo thu tu tang dan 
		 for(int i = n-1; i>0; i--)
         {
       	    for(int j = 0; j<i; j++)
       	    {
       		   if(a[j]>a[j+1])
       		   {
       		        int tmp = a[j];
       		        a[j] = a[j+1];
       		        a[j+1] = tmp;
       		   }
		    }
	     }
	     //sap xep b theo thu tu tang dan
	     for(int i = n-1; i>0; i--)
         {
       	    for(int j = 0; j<i; j++)
       	    {
       		   if(b[j]<b[j+1])
       		   {
       		        int tmp = b[j];
       		        b[j] = b[j+1];
       		        b[j+1] = tmp;
       		   }
		    }
	     }
	     //ghi so bo test
	     cout<<"test "<<count_test<<endl;
	     count_test++;
	     //xep a va b vao dung vi tri
	     int chan = 0;
	     int le = 0;
	     for(int i=0; i<(n*2); i++)
	     {
	     	if(i%2==0)
	     	{
	     		cout<<a[chan]<<" ";
	     		chan++;
			}
			else
			{cout<<b[le]<<" ";
			 le++;
			}	     	
		 }				
	//het	
	cout<<endl;	
	}
	return 0;
}