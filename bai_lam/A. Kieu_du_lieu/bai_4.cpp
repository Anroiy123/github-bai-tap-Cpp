#include <iostream>//gia tri thap phan
#include <iomanip>
using namespace std;
int main()
{
   int N;
   cout<<"Nhap N : ";cin>>N;
   if(N > 999999)
   {
      cout<<"Nhap lai N : ";cin>>N;
   }
   cout << setprecision(15) << fixed <<(float) 1/N;
   cout <<endl;
   system("pause");
   return 0;
}