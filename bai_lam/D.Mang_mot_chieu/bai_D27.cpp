#include <iostream>
using namespace std;
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
       //nhap cac phan tu vao mang.XXXXXXXXX
       cout<<"Nhap N phan tu vao mang : ";
       for(int i = 0; i<n; i++) {cin>>arr[i];}
       //sap xep mang doi cho truc tiep
       for(int i=0; i<n-1 ; i++)
	   {
            for(int j = i+1; j<n; j++)
			{
                if(arr[i] > arr[j])
				{
                    int tmp=arr[i]; 
					    arr[i]=arr[j]; 
						arr[j]=tmp;
                }
            }
            cout<<"Buoc "<<i+1<<": ";
            for(int i=0; i<n; i++)
			{
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
	   //het
        cout<<endl;
	} 
    return 0;
}