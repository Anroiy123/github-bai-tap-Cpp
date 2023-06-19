#include <iostream>
#include <math.h>
using namespace std;
int main ()
{       int t;
        cout<<"Nhap so bo test : ";cin>>t;
        while(t--)
        {
        int n,arr[50];
        cout<<"Nhap n : ";cin>>n;
        while(n>50||n<2)
        {
        	cout<<"Nhap lai n : ";cin>>n;
		}
        cout<<"Nhap vao mang : ";
        for(int i = 0; i < n; i++)
        {
        	cin>>arr[i];	
		}
	    //dem so phan tu lon hon so dung truoc
	    int count = 0;
        for (int i = 1; i < n; i++) 
		{
            for(int j=0; j < i; j++)
            {
            	if(arr[i]>arr[j])
            	{
            		count++;
            		break;
				}
			}
        }
		cout<<"So phan tu lon hon so dung truoc la : "<<count;
	    
		cout<<endl;
	}
	return 0;
}
