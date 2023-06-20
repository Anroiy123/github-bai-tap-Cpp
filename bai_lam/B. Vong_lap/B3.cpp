#include <iostream>
using namespace std;

int main()
{
    int t;cout<<"Nhap so bo test: ";cin>>t;
    while(t--)
    {
       int n;cout<<"nhap N: ";cin>>n;
       int sum;
       while(n!=0)
       {
        sum += (n%10);
        n /= 10;
       }
       cout<<sum<<endl;
       sum = 0;
    }
    system("pause");
    return 0;
}