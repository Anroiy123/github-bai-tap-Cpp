#include <iostream>
using namespace std;

int main() 
{
   int n;
   cout << "Nhap chieu cao tam giac: ";
   cin >> n;
  //ve tam giac vuong trai - rong
   for (int i = 1; i <= n; i++) 
   {
      for (int j = 1; j <= i; j++) 
      {
         if (j == 1 || i == n || j == i) 
         {
            cout << " * ";
         } else 
         {
            cout << " . ";
         }
      }
      cout << endl;
   }
   system("pause");
   return 0;
}