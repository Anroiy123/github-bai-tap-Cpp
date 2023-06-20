#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout <<" nhap so bo test ";
    cin >> n;
    while (n--)
    {
        int a, sc = 0, sl = 0, chuso;
        cout << "nhap so nguyen duong";
        cin >> a;
        if (a < 1e9)
        {
            while (a > 0 )
            {
            chuso = a%10; 
                if (chuso % 2 ==0)
                {
                    sc++;
                }
                else
                {
                    sl++;
                }
                a/=10;
            }
            cout << sl << " " << sc << endl;
        }
        

    }
    return 0;
}
