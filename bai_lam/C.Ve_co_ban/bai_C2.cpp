#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap vao so dau * cua hinh vuong: ";
    cin >> n;

    // In ra hinh vuong
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    system("pause");

    return 0;
}