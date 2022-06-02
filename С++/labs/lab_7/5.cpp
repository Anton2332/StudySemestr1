#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,k,p,min;
	cout <<"n = ";
	cin >>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cout <<"a"<<i<<" = ";
		cin >>a[i];
	}
	
	for (i=0;i<n;i++)
	{
		if (a[i]%2)
		{
		
		    min=a[i];
		    k++;
    	}
    	if(k==1)
    	break;
	}
	for (i=0;i<n;i++)
	{
		if(a[i]%2)
		{
			if(min>a[i])
			min=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(min==a[i])
		p=i;
	}
	cout <<"min = "<<min<<endl<<"p = "<<p;
	
	getch();
	return 0;
 } 
