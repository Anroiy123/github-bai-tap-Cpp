#include <iostream>
#include <math.h>
using namespace std;
int main ()
{       
        int n,arr[100];
        cout<<"Nhap n : ";cin>>n;
        while(n>100||n<2)
        {
        	cout<<"Nhap lai n : ";cin>>n;
		}
        cout<<"Nhap vao mang : ";
        for(int i = 0; i < n; i++)
        {
        	cin>>arr[i];	
		}
	    //sap xep mang 
	    for(int i = n -1; i>0; i--)
	    {
	    	for(int j = 0; j<i; j++)
	    	{
	    		if(arr[j]<arr[j+1])
	    		{
	    			int tmp = arr[j];
	    			arr[j] = arr[j+1];
	    			arr[j+1] = tmp;
				}
			}
		}
		//in ra gia tri nho nhat va nho thu hai
		cout<<"Gia tri nho nhat la : "<<arr[n-1]<<" "<<endl;
		cout<<"Gia tri nho thu hai la : "<<arr[n-2]<<" ";
		cout<<endl;
	return 0;
}


