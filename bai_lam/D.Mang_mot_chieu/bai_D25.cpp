#include <iostream>
#include <math.h>
#include <cstring>//thu vien de su dung memset
using namespace std;

int cnt[30005];
int main ()
{
	int t;
	cout<<"Nhap so bo test: ";cin>>t;
	while(t--)
	{
	   int n;
       cout<<"Nhap N: ";
       cin>>n;

       int a[n];
       cout<<"Nhap N phan tu vao mang : ";
       for(int i = 0; i<n; i++) {cin>>a[i];}
       //So lan xuat hien nhieu nhat trong day
       for(int i = 0; i<n; i++) {cnt[a[i]]++;}
        int max_fre = 0;// luu tan suat lon nhat
        for(int i = 0;i<n;i++)//duyet mang de tim ra so tan xuat lon nhat (max_fre)
		{
            if(cnt[a[i]] > max_fre)
			{
                max_fre = cnt[a[i]]; 
            }
        }
        for(int i=0 ; i< n ; i++ )//duyet lai mang de tim ra nhung so co cung tan xuat lon nhat 
		{
            if(cnt[a[i]] == max_fre)
			{
                cout<<a[i]<<" ";
                cnt[a[i]]=0;
            }
        }
        memset(cnt, 0, sizeof(cnt));//reset cnt ve 0 cho bo test tiep theo
        cout<<endl;
	} 
    return 0;
}