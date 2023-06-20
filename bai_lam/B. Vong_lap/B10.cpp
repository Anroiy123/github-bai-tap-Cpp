#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cout << "nhap so a, b ";
    cin >> a >> b;
    if (a< 1e6 && b <1e6)
    {
        for (int i = a; i <= b; i++)
        {
            sum +=i;
        }
        cout << sum;
    }
    system("pause");
    return 0;
}
