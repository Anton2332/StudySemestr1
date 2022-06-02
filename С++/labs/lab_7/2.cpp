#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	
	int i,n,d=0;
	cout <<"n = ";
	cin >>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	    cout <<"a"<<i<<" = ";
	    cin>>a[i];
	    cout <<"b"<<i<<" = ";
	    cin >>b[i];
	}
	for (i=0;i<n;i++)
	{
		d=d+a[i]*b[i];
	}
	cout <<"d = "<<d;
	
	getch();
	return 0;
 } 
