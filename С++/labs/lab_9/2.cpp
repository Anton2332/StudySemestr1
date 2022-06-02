#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,j,p,k;
	cout<<"n = ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

    for(i=0;i<n;i++)
    if(a[i]>=0 && a[i]<=5)
    {
    	k=i;
    	for(j=i-1;j<n;j++)
    	{
    	    p=a[j];
			a[j]=a[i];
			a[i]=p;
			i++;
		}
		n--;
		i=k;
	} 
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		p=a[i];
		a[i]=a[j];
		a[j]=p;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	getch();
	return 0;
 } 
