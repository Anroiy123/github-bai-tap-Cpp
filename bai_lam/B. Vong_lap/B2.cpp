#include <iostream>//Tong chu so
using namespace std;
int main()
{
    int n;
    cout<<"Nhap N: ";cin>>n;
    while(n>1e9||n<0){cout<<"Nhap lai N: ";cin>>n;}
    //tong chu so
    int KQ = n;
    int sum;
    while (n != 0) 
    {
        int so = n % 10;
        sum += so;
        n /= 10;
    }
    cout << "Tong cac chu so cua " << KQ << " la : " << sum << endl;   
    system("pause");
    return 0;
}