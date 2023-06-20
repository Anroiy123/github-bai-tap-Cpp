#include <string>//sap xep mat hang
#include <iostream>
using namespace std;

struct mat_hang{
	int ma; 
	char ten[1000] , nhom_hang[1000] ;
	float gia_mua , gia_ban , loi_nhuan ;
};

int main(){
	int n;
	cin>>n;
	struct mat_hang ds[n];
	
	for(int i=0; i<n; i++)
	{
		ds[i].ma = i+1;
	    cin.ignore();
		cin.getline(ds[i].ten , 1000);
		cin.getline(ds[i].nhom_hang , 1000);
		cin>>ds[i].gia_mua>>ds[i].gia_ban;
		ds[i].loi_nhuan=ds[i].gia_ban-ds[i].gia_mua;	
	}
	for(int i = 0; i < n-1; i++)
	{	
	for(int j =i+1; j<n; j++)
	{
		if(ds[i].loi_nhuan < ds[j].loi_nhuan)
		{
		   mat_hang C = ds[i];
		   ds[i] = ds[j];
		   ds[j] = C;	
		}
	}
	}
	for(int i=0; i<n; i++)
	{
		cout<<ds[i].ma<<"\t"<<ds[i].ten<<"\t"<<ds[i].nhom_hang<<"\t"<<ds[i].loi_nhuan<<"\t\n";
	}
	   	
    system("pause");
	return 0;
}

/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/
