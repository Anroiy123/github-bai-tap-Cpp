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

    int a[n];
    cout<<"Nhap N phan tu vao mang : ";
    for(int i = 0; i<n; i++)
	{
            cin>>a[i];
    }
    //dem so lan xuat hien 2
    cout<<"test "<<count_test<<endl;
	count_test++;
    for(int i = 0; i<n ; i++)
	{
        cnt[a[i]]++;
    }
    cout<<"so lan xuat hien cua tung phan tu la : "<<endl;
    for(int i=0; i<n; i++)
	{
        if(cnt[a[i]] != 0)
		{
            cout<<a[i]<<" Xuat hien "<<cnt[a[i]]<<" Lan "<<endl;
            cnt[a[i]]=0;
        }
    }
    cout<<endl;
}
    return 0;
}