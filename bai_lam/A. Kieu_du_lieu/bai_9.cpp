#include <iomanip>//phuong trinh bac nhat
#include <iostream>
using namespace std;


int main()
{
    int t;cin>>t;
    while(t--)
    {

    float a,b;cin>>a>>b;
    if(a==0&&b!=0)
    {
	   cout<<"vo nghiem"<<endl;
	   break;
	}
    if(a==0&&b==0)
    {
	   cout<<"vo so nghiem"<<endl;
	   break;
	}
    if(b==0){cout<<"0";}
    cout<<setprecision(2)<<fixed<<(-b)/a<<endl;
    }
    system("pause");
    return 0;
}