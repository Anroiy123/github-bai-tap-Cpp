#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int k = 1; k <= t; k++) {
        int n;
        cin >> n;
        
        int a[n], dem[n], max = 1;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            dem[i] = 1;
        }
        
        for (int i = 1; i < n; i++) 
        {
            if (a[i] > a[i-1])
                dem[i] = dem[i-1] + 1;
            else
                dem[i] = 1;
            if (dem[i] > max)
                max = dem[i];
        }
        
        cout << "Test: " << k << "\n";
        cout << max << "\n";
        for (int i = 0; i < n; i++) {
            if (dem[i] == max) {
                for (int j = i - max + 1; j <= i; j++) {
                    cout << a[j] << "\t";
                }
                cout << "\n";
            }
        }
    }
    system("pause");
    return 0;
}
