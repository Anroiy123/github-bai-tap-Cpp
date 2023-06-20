#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; cout<<"Nhap so bo test : ";cin>>t;
    while(t--)
    { 
        int a;
        cout <<"nhap so nguyen duong: ";
        cin >>a;
        int sd = a;
            bool kt = true;
            int sc = sd%10;
            sd /= 10;
            while (sd != 0)
            {
                int skc = sd %10;
                sd /= 10;
                if (sc < skc)
                {
                    kt = false;
                    break;
                }
                else
                {
                    sc = skc;
                }
                
            }
            if (kt)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
            cout<<endl;
    }
     system("pause");   
    return 0;
}