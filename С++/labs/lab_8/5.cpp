#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,j,p;
	cout<<"n = ";
	cin>>n;
	while(n%3)
	{
		cout<<"n = ";
		cin>>n;
	}
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"a"<<i<<" = ";
		cin >>a[i];
	}
	for(i=0;i<n/3;i++)
	{
		for(j=i+1;j<n/3;j++)
    	{
    		if(a[i]>a[j])
    		{
    		p=a[i];
    		a[i]=a[j];
    		a[j]=p;
    	    }
    	    
    	    
		}
		
	}
	
		for(i=n-(n/3);i<n;i++)
	{
		for(j=i+1;j<n;j++)
    	{
    		if(a[i]<a[j])
    		{
    		p=a[i];
    		a[i]=a[j];
    		a[j]=p;
    	    }
    	    
    	    
		}
		
	}
		for(i=0;i<n;i++)
	{
	cout<<"a"<<i<<" = "<<a[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
 } 
