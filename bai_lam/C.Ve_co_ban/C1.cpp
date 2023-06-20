#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Nhap vao so dau * cua hinh vuong: ";
    cin >> n;
    int m = n;
    int t = n;
    // In ra hinh vuong
    while(n>0)
    {
    	int t = m;
    	while(t>0)
    	{
    		cout<<"* ";
    		t--;	
		}
		n--;
		cout<<endl;
	}
    system("pause");
    return 0;
}