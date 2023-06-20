#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s2[200], a[100][100], k;
    int pos1 = 0;
    
    while (cin >> a[pos1]) {
        pos1++;
        k = getchar();
        if (k == 10) break;
    }
    
    cin.ignore();
    cin.getline(s2, 200);
    
    for (int i = 0; i < pos1; i++) 
    {
        if (strcmp(a[i], s2) == 0) {
            a[i][0] = 0;
        }
        
        if (a[i][0] != 0) {
            cout << a[i] << " ";
        }
    }
    system("pause");
    return 0;
}