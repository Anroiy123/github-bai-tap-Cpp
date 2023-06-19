#include <iostream>//tinh tong 
using namespace std;
int main()
{
   int N;
   cout<<"Nhap N ";cin>>N;
   if(N > 999999)
   {
      cout<<"Nhap lai N";cin>>N;
   }
   int M;
   cout<<"Nhap M ";cin>>M;
   if(M > 999999)
   {
      cout<<"Nhap lai M";cin>>M;
   }
   cout<<M+N<<endl;;

  system("pause");
  return 0;
}