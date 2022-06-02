#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,d=1;
	float s=0.0;
	cout <<"n = ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"a"<<i<<" = ";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	s=s/n;
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		d=d*a[i];
	}
	cout<<"d = "<<d;
	
	
	
	getch();
	return 0;
 } 
