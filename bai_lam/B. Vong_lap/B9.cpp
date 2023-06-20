#include <iostream>
using namespace std;
 
int main()
{
    int so;
    int soTemp;
    int tich = 1;
    cout << "Nhap so: ";
    cin >> so;
    if (so < 1e9)
    {
        soTemp = so;
        while (soTemp != 0)
        {
            tich *= soTemp % 10;
            soTemp /= 10;
        }
        cout << tich << endl;
    }
    system("pause");
    return 0;
}
