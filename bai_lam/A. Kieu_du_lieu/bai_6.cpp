#include <iomanip>
#include <iostream>//tinh tong,hieu,tich,thuong
using namespace std;
int main()
{
   int M;
   cout<<"Nhap M : ";cin>>M;
   if(M > 999999)
   {
      cout<<"Nhap lai M";cin>>M;
   }
   int N;
   cout<<"Nhap N : ";cin>>N;
   if(N > 999999)
   {
      cout<<"Nhap lai N";cin>>N;
   }
   cout<<M+N<<" "<<M-N<<" ";cout<<M*N<<" ";cout<<setprecision(2)<<fixed<<(float) M/N<<" "<<M % N<<endl;

  system("pause");
  return 0;
}