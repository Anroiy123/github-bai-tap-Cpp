#include <iostream>//Tong chu so
using namespace std;
int main()
{
    int n;
    cout<<"Nhap N: ";cin>>n;
    while(n>1e9||n<0){cout<<"Nhap lai N: ";cin>>n;}
    //tong chu so
    int sum;
    while (n != 0) 
    {
        sum += (n%10);
        n /= 10;
    }
    cout << "Tong cac chu so la : " << sum << endl;   
    system("pause");
    return 0;
}