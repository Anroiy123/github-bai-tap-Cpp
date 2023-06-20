#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << " nhap so bo test ";
    cin >> t;
    while (t--)
    {
        int so;
        cout << "nhap so " << endl;
        cin >> so;
        if (so >= 1e1 && so < 1e9)
        {
            int so_dau = so;
            while (so_dau >= 10)
            {
                so_dau /= 10;
            }
            int so_cuoi = so %10;
            if (so_dau == so_cuoi)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO"<< endl;
            }
            
        }      
    }
    system("pause");
    return 0;
}
