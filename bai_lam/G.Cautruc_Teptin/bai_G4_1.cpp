#include <iostream>
#include <cstring>
using namespace std;

struct thisinh{
    int ma;
    char ten[1000], ns[1000];
    float d1, d2, d3, tong;
};

int main()
{
    int n;
    cin >> n;
    thisinh ds[n];

    for (int i = 0; i < n; i++)
    {
        ds[i].ma = i + 1;
        cout <<endl;
        cin.ignore(); // ignore the newline character left by previous cin
        cin.getline(ds[i].ten, 1000);
        cin.getline(ds[i].ns, 1000);
        cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
        ds[i].tong = ds[i].d1 + ds[i].d2 + ds[i].d3;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].tong < ds[j].tong)
            {
                thisinh C = ds[i];
                ds[i] = ds[j];
                ds[j] = C;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ds[i].ma << "\t" << ds[i].ten << "\t" << ds[i].ns << "\t" << ds[i].tong << "\t\n";
    }
    system("pause");
    return 0;
}

/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
4.5
4.5
5.0
5.5
*/