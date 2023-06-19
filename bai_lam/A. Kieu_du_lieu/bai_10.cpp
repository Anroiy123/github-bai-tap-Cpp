#include <iostream>//kiem tra so chinh phuong
#include <cmath>
using namespace std;

int main()
{
    int t;cout<<"Nhap so bo test: ";cin>>t;
    while(t--)
    {
       int n;cout<<"nhap n: ";cin>>n;
       int tmp = sqrt(n);
       if(tmp * tmp == n)
       {
        cout<<"YES"<<endl;
       }
       else 
       {
        cout<<"NO"<<endl;
       }       
    }
    system("pause");
    return 0;
}