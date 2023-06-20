#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Nhap vao so dau * cua hinh vuong: ";
    cin >> n;
    int m = n;
    int t = 0;
    // In ra hinh tam giac vuong trai
    while(t<=m)
    {
         for(int i=0; i<t;i++)
         {
              cout<<"*";
         }
       t++;
        cout<<endl;
    }  
    system("pause");
    return 0;
}