#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,max,min,j,l;
	cout<<"n = ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		
		if(min>a[i])
		min = a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==min)
		{
			n++;
			for(j=n-1;j>i;j--)
			{
				a[j]=a[j-1];
			}
			a[i+1]=max;
			
		}
	
	}
	for(i=0;i<n;i++)
	{
        if(a[i]==max && a[i-1]!=min)
		{
			n++;
			for(j=n-1;j>i;j--)
			{
				a[j]=a[j-1];
			}
			a[i+1]=min;
			
		}
	}

    for(i=0;i<n;i++)
	{
		cout <<a[i]<<" ";
	}
	
	getch();
	return 0;
 } 
