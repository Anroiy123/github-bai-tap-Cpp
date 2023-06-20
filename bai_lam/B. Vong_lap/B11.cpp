#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cout << "Nhap so ";
    getline(cin, str);
    char temp = str[0];
    str[0] = str[str.length()-1];
    str[str. length() - 1] = temp;
    cout << str << endl;
    system("pause");
    return 0;
}