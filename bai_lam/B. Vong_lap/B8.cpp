#include <iostream>//li?t kê s? chính phuong
#include <math.h>
using namespace std;
int cnt[10000000];

bool scp(int n)
{
    int m = sqrt(n);
    return (m*m == n);
}

int main()
{
    int a, b;
    cout << "nhap hai so ";
    cin >> a >> b;
    int count = 0;
    if (a<= 1e9 && b <= 1e9 && a<b)
    {
        
        for (int i = a; i < b; i++)
        {
            
            if (scp(i))
            {
                cnt[i]++;
                count++;
                
            }
        }        
    }
    cout<<count<<endl;
    for(int i=0; i<b; i++)
    {
        if(cnt[i]>=1)
        {
            cout<<i<<endl;
        }
    }
    system("pause");
    return 0;   
}