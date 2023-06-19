#include <iostream>
#include <math.h>
using namespace std;
int main ()
{       
        int n,arr[100];
        cout<<"Nhap n : ";cin>>n;
        cout<<"Nhap vao mang : ";
        for(int i = 0; i < n; i++)
        {
        	cin>>arr[i];	
		}
	    int evencount = 0; //so luong phan tu chan trong mang
	    int oddcount= 0; //so luong phan tu le trong mang
	    //dem so luong chan va le trong mang arr
	    for(int i=0 ; i < n; i++)
	    {
	    	if(arr[i]%2==0)
	    	{
	    		evencount ++;
			}
			else
			{
				oddcount ++;
			}
		}
		//khai bao hai mang chan va le vs kich thuoc tuong ung
		int evenArr[evencount];//khai bao mang chan
		int oddArr[oddcount];//khai bao mang le
		int evenindex = 0;//phan tu cuoi cung cua mang chan
		int oddindex  = 0;//phan tu cuoi cung cua mang le
		//chen vao mang chan va le
		for(int i=0; i < n ; i++)
		{
			if(arr[i]%2==0)
			{
				evenArr[evenindex]=arr[i];
				evenindex++;
			}
			else
			{
				oddArr[oddindex]=arr[i];
				oddindex++;
			}
		}
		//in ra mang chan
		cout<<"Mang chan la : ";
		for(int i = 0; i < evencount; i++ )
		{
			cout<<evenArr[i]<<" ";
		}
		cout<<endl;
		//in ra mang le
		cout<<"Mang le la : ";
		for(int i = 0; i < oddcount; i++ )
		{
			cout<<oddArr[i]<<" ";
		}
		cout<<endl;
	return 0;
}


