#include <iostream> //Đếm ký tự
#include <string>
using namespace std;

int main()
{
    string str;cout<<"Nhap vao xau : ";
    getline(cin,str);
    int cnt_letter = 0;
    int cnt_digit = 0;
    int cnt_other = 0;
    for(int i = 0 ; i < str.size(); i++)
    {
         if (isalpha(str[i])) // Kiểm tra xem ký tự có phải là chữ cái hay không
        {
            cnt_letter++;
        }
        else if (isdigit(str[i])) // Kiểm tra xem ký tự có phải là chữ số hay không
        {
            cnt_digit++;
        }
        else // Ký tự khác
        {
            cnt_other++;
        }    
    }
        cout << "So chu cai: " << cnt_letter << endl;
        cout << "So chu so: " << cnt_digit << endl;
        cout << "So ky tu khac: " << cnt_other << endl;

}