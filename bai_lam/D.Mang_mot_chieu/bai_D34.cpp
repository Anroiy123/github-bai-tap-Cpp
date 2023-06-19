#include <iostream>
using namespace std;
int main() 
{
	int n;
    cout<<"Nhap n : "; cin>>n;
    int a[n];
    cout<<"Nhap N phan tu vao mang: ";
    for (int i = 0; i < n; i++) {cin>>a[i];}
    //sap xep noi bot
    int buoc = 1;
        for (int i = n -1; i > 0 ; i--)
	    {
	        for (int j = 0; j < i; j++)
	        {
	            if (a[j] > a[j+1])
	            {
	                int temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	            
	        }
            cout<<"Buoc "<<buoc<<": ";
            buoc++;
            for(int i=0; i<n; i++)
			{
                cout<<a[i]<<" ";
            }
            cout<<endl;
	    }
        
	return 0;
}