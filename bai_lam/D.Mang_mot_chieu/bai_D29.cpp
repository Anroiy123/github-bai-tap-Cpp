#include <iostream>
using namespace std;
int main() 
{
	int n;
    cout<<"Nhap n : "; cin>>n;
    int a[n];
    cout<<"Nhap N phan tu vao mang: ";
    for (int i = 0; i < n; i++) {cin>>a[i];}
    
    for (int i = 0; i < n; i++)
	{	
        cout<<"Buoc "<<i<<": ";
        int k=i;
        for (int i = 0; i < k ; i++)
	    {
	        for (int j = i + 1; j < k+1; j++)
	        {
	            if (a[i] > a[j])
	            {
	                int temp = a[j];
	                a[j] = a[i];
	                a[i] = temp;
	            }
	        }
	    }
        for(int j=0;j<i+1;j++)
		{		
        	cout<<a[j]<<" ";			        	
		}
        cout<<"\n";
        
    }
	return 0;
}