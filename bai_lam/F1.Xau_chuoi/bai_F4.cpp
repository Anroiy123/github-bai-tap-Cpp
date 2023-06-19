#include <iostream>
#include <unordered_set>
using namespace std;
int main() 
{
    string s;
    getline(cin, s);
    unordered_set<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) 
    {
        if (isalnum(s[i])) 
        {
            // Nếu ký tự đang xét là chữ cái hoặc số, ta thêm nó vào từ hiện tại
            word += s[i];
        } else if (word != "") 
        {
            // Nếu ký tự đang xét không phải là chữ cái hoặc số và từ hiện tại không rỗng
            // thì ta thêm từ hiện tại vào set và reset từ hiện tại
            words.insert(word);
            word = "";
        }
    }
    // Kiểm tra xem nếu từ hiện tại không rỗng, ta cũng cần thêm nó vào set
    if (word != "") 
    {
        words.insert(word);
    }
    // Ghi ra các từ đã được loại bỏ trùng lặp
    for (auto word : words) 
    {
        cout << word << " ";
    }
    return 0;
}