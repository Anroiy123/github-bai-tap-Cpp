#include <iostream>

using namespace std;
int main()
{
   int N;
   cout<<"Nhap N : ";cin>>N;
   if(N > 999999)
   {
      cout<<"Nhap lai N";cin>>N;
   }
   cout<<N*2;
   cout<<"hello anh em toi la Hung";
   
   system("pause");
   return 0;
}