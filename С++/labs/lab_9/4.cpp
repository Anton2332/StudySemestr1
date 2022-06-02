#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,j,t;
	cout<<"n = ";
	cin >>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
    j=n-1;
    for(i=0;i<n/2;i++)
    {
    	t=a[i];
    	a[i]=a[j];
    	a[j]=t;
    	j--;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		a[i]=a[i]*2;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	
	
	getch();
	return 0;
 } 
