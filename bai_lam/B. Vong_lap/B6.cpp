#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cout << "nhap so bo test : ";
    cin >> n;
    while (n--)
    {
        int ucln;
        cout << "nhap 2 so a, b" << endl;
        cin >> a >> b;
        lam_lai :
        if (a < 1e6 && b< 1e6 && a>0 && b>0)
        {
            for (int i = 1; i <= a && i <= b; i++)
            {
                if (a % i ==0 && b % i == 0)
                {
                    ucln = i;
                }
                
            }
            cout << ucln <<endl;
        }
        else 
        {
            cout<<"Nhap lai 2 so a,b : "<<endl;
            cin >> a >> b;
            goto lam_lai;
        }
        
    }
    system("pause");
    return 0;
}
