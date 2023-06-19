#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        long long s = 0, max = -1e9;//-1e9 = -1,000,000,000.
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            s += x;
            if (max < s)
                max = s;
            if (s < 0)
                s = 0;
        }
        cout<<max<<endl;
    }
}
