#include <iostream>
using namespace std;
int main()
{
    int cd, cr;
    cout << "nhap cd, cr: ";
    cin >> cd >> cr;
    if (cd <40 && cr < 40)
    {
        for (int i = 1; i <= cr; i++)
        {
            for (int j = 1; j <= cd; j++)
            {
                if (i ==1 || i == cr || j == 1 || j == cd)
                {
                    cout <<"*";
                }
                else
                {
                    cout <<" ";
                }
                
            }
            cout << endl;
        }
    }
    system("pause");
    return 0;
}