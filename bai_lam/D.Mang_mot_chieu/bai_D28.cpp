#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) 
{
    int minIndex;

    for (int i = 0; i < n - 1; i++) 
	{   
        minIndex = i;

        for (int j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        if (minIndex != i) 
		{
            swap(arr[i], arr[minIndex]);
        }
         cout<<"Buoc "<<i+1<<": ";
            for(int i=0; i<n; i++)
			{
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
}
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
       //sap xep chon
       selectionSort(arr, n);

	   //het
        cout<<endl;
	} 
    return 0;
}