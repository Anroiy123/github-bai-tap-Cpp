#include <iostream>
#include <math.h>
using namespace std;
int main ()
{       
        int t;
        cout<<"Nhap so bo test : ";cin>>t;
      while(t--)
    {
		int n,m, A[100],B[100],p;
    	cout<<"Nhap n , m va p : ";cin>>n;cin>>m;cin>>p;
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
		//Thuc hien chen mang B vao vi tri p cua mang A
		for (int i = n - 1; i >= p; i--) 
		{
                A[i + m] = A[i];
        }
         for (int i = 0; i < m; i++) 
		 {
               A[p + i] = B[i];
         }
         // In mang A sau khi chèn
         cout << "Mang A sau khi chen: ";
          for (int i = 0; i < n + m; i++) 
		  {
               cout << A[i] << " ";
          }
    cout << endl;
    }
	return 0;
}
