#include <iostream>
using namespace std;

int main()
{
    int n;cout<<"Nhap n: ";cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; 
    }
    int m; cout<<"Nhap vi tri can dich : ";cin>>m;
    for(int i=(n-m); i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<(n-m); i++)
    {
        cout<<arr[i]<<" ";
    }
    system("pause");
    return 0;

}