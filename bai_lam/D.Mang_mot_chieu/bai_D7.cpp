#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    	int n,m, A[100],B[100];
    	cout<<"Nhap n va m : ";cin>>n;cin>>m;
    	while(n > 100)
    	{
    		cout<<"Nhap lai n nho hon 100 : ";cin>>n;
		}
		while(m > 100)
    	{
    		cout<<"Nhap lai m nho hon 100 : ";cin>>m;
		}
		cout<<"Nhap A: ";
    	for(int i = 0; i < n; i++)
    	{
    		cin>>A[i];
		}
		cout<<"Nhap B: ";
		for(int j = 0; j < m; j++)
    	{
    		cin>>B[j];
		}
		//Thuc hien chen mang B vao mang A
		int t;
		cout<<"Nhap vi tri can chen : ";cin>>t;
		for (int i = n - 1; i >= t; i--) 
		{
                A[i + m] = A[i];
        }
         for (int i = 0; i < m; i++) 
		 {
               A[t + i] = B[i];
         }

         // In mang A sau khi chen
         cout << "Mang A sau khi chen: ";
          for (int i = 0; i < n + m; i++) 
		  {
               cout << A[i] << " ";
          }
    cout << endl;
		 	
	return 0;
}


