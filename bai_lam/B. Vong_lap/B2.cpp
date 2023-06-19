#include <iostream>//Tong chu so
using namespace std;

int main()
{
    int n;cout<<"Nhap N: ";cin>>n;
    while(n>999999999)
    {
        cout<<"Nhap lai N: ";cin>>n;
    }
    int KQ = n;
    int sum;

    while (n > 0) 
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << "Tong cac chu so cua " << KQ << " la " << sum << endl;   
    system("pause");
    return 0;
}