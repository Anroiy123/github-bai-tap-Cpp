#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Nhap chieu cao tam giac: ";
   cin >> n;

   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
         cout << j << " ";
      }
      cout << endl;
   }
   system("pause");
   return 0;
}