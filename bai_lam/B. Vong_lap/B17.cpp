#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout <<" nhap so bo test ";
    cin >> n;
    if (n <= 1e2)
    {
        while (n--)
        {
            int a, count=0;
            cout << "nhap so nguyen: ";
            cin >> a;
            if (a >=1 && a<= 1e9)
            {
                for (int i = 1; i <=a; i++)
                {
                    if (a % i ==0)
                    {
                        if (i % 2 ==0)
                        {
                            count++;
                        }
                        
                    }
                    
                }
            }
            cout << count << endl;
        }
    }
    system("pause");
    return 0 ;
}
