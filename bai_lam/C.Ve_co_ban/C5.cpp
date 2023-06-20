#include <iostream>
using namespace std;

int main() {
   int n, m;
   cout << "Nhap so hang: ";
   cin >> m;
   cout << "Nhap so cot: ";
   cin >> n;

   for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
         cout << j + (i - 1) * m << "  ";
      }
      cout << endl;
   }
   system("pause");
   return 0;
}