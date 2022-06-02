#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,min,d=1;
	cout <<"n = ";
	cin >>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cout <<"a"<<i<<" = ";
		cin>>a[i];
	}
	min =a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	for (i=0;i<n;i++)
	{
		if(a[i]>0)
		d=d*a[i];
	}
	cout <<"min = "<<min<<endl<<"d = "<<d;
	
	
	
	getch();
	return 0;
 } 
