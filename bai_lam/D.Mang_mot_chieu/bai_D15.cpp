#include <iostream>
#include <math.h>
using namespace std;
int cnt[10001];
int main ()
{
	int t;
	cout<<"Nhap so bo test : ";cin>>t;
	int count_test = 1;
	while(t--)
{
    int n;
    cout<<"Nhap N: ";
    cin>>n;

    int arr[n];
    cout<<"Nhap N phan tu vao mang : ";
    for(int i = 0; i<n; i++)
	{
            cin>>arr[i];
    }
    cout<<"test "<<count_test<<endl;
	count_test++;
	//dem cac so nguyen to trong day
    
	for (int i = 0; i < n; i++) 
    {
        bool isPrime = true;
        if (arr[i] < 2) 
        {
            isPrime = false;
        }
        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) 
        {
            cnt[arr[i]]++;
        }
    }			
	for(int i = 0 ; i < n; i++)
	{
		if(cnt[arr[i]] != 0)
		{
			cout<<arr[i]<<" xuat hien "<<cnt[arr[i]]<<" lan "<<endl;
			cnt[arr[i]]=0;
		}
	}
	
    cout<<endl;
}
    return 0;
}