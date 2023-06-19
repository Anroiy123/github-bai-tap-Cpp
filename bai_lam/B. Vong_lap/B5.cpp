#include <iostream>
using namespace std;

int main()
{
    int t;cout<<"Nhap so bo test: ";cin>>t;
    while(t--)
    {
      int n;cout<<"NHAP N: ";cin>>n;
      bool isPrime = true;
        if (n < 2) 
        {
            isPrime = false;
        }
        for (int i = 2; i <= n / 2; i++) 
        {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            cout<<"YES";
            
        }
        else 
        {
            cout<<"NO";
            
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}