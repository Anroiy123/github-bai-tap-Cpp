#include <iostream>
#include <math.h>
using namespace std;
int cnt[10000001];
int main ()
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
    //dem so lan xuat hien 1
    for(int i = 0; i<n ; i++)
	{
        cnt[a[i]]++;
    }
    cout<<"so lan xuat hien cua tung phan tu la : ";
    for(int i=0; i<n; i++)
	{
        if(cnt[a[i]] != 0)
		{
            cout<<"\n"<<a[i]<<" "<<cnt[a[i]];
            cnt[a[i]]=0;
        }
    }
    return 0;
}