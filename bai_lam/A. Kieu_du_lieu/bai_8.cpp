#include <iostream>//chuyen doi ngay thang

using namespace std;

int main() {
    int totalDays;
    cout << "Nhap so ngay: ";
    cin >> totalDays;

    int years = totalDays / 365;
    int weeks = (totalDays % 365) / 7;
    int days = totalDays % 7;

    cout << "So nam: " << years << endl;
    cout << "So tuan: " << weeks << endl;
    cout << "So ngay: " << days << endl;
    
    system("pause");
    return 0;
}