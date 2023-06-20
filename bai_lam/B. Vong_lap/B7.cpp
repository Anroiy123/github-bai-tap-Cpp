#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cout << "nhap so bo test ";
    cin >>a;

    while (a--)
    {
        int n;
        cout << "Nhap n = ";
        cin >> n;
        int dem;
        
        for(int i = 2; i <= n; i++)
        {
        
            while(n % i == 0)
            {
                cout <<i <<" ";
                n /= i;
            }
            
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}