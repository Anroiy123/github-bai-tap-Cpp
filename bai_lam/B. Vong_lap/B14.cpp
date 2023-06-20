#include <iostream>//so strong
using namespace std;
int giaithua(int n)
{
    int gt =1;
    for (int i = 1; i <=n ; i++)
    {
        gt *= i;
    }
    return gt;
}
bool sostrong(int n)
{
    int tgt = 0;
    int temp = n;
    while (temp >0)
    {
        int chuso = temp %10;
        tgt += giaithua(chuso);
        temp /= 10;
    }
    return (tgt == n);
}
int main()
{
    int n;
    cout << "nhap n ";
    cin >> n;
    if (n <1e6)
    {
        if (sostrong(n))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    } 
    system("pause");
    return 0;
}
