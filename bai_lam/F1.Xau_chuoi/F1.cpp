#include <iostream>//dem so tu trong sau
#include <string>
using namespace std;

int main()
{
    int t;cout<<"Nhap so bo test: ";
    cin>>t;
    cin.ignore();
    while(t--)
	{
        string a;
        cout<<"nhap chuoi : ";
        getline(cin,a);
        int dem = 1;
        for(int i = 0 ;i < a.size() - 1; i++ )
		{
            if(a[i] == ' '&& a[i+1] != ' ') dem++;
        }
        cout<<"so tu la : "<<dem;
        cout<<endl;
    }
} 