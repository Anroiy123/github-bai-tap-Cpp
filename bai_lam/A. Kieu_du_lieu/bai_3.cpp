#include <iostream>//binh phuong
using namespace std;
int main()
{  
   int t;cout<<"Nhap so bo test : ";
   cin>> t;
   while (t--)
   {
   int N;
   cout<<"Nhap N ";cin>>N;
   if(N > 999999999)
   {
      cout<<"Nhap lai N";cin>>N;
   }
   cout<<N*N<<" ";
   cout<<endl;
   }
   system("pause");
  return 0;
}