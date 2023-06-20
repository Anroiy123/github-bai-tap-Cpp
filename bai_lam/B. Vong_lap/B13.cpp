#include <iostream>
using namespace std;

bool shh(int n)
{
    int sum=0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i ==0)
        {
            sum += i;
        }   
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int a; 
    cout <<"nhap a = ";
    cin >> a;
    if(a <1e6)
    {
    	if (shh(a))
	    {
	        cout <<"1";
	    }
	    else
	    {
	        cout <<"0";
	    }
	}
    system("pause");
    return 0;
}
