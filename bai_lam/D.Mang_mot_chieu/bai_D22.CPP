#include <iostream>
using namespace std;

int main() 
{
	int n,a[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	for (int i = 0; i < n; i++) 
	{
        if(b[i]==0)
        {
        	cout<<a[i]<<" ";
        	for(int j=  i  ;j<n;j++)
			{						
				if(a[i]==a[j])
				{
					b[j]=1;
				}			
			}
		}
    }
	system("pause");
	return 0;
}