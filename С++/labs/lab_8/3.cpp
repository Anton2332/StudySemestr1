#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,n,j,h=0,g=0,p;
	cout <<"n = ";
	cin >>n;
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
    {
	    cout<<"a"<<i<<" = ";
	    cin>>a[i];
    }
	for(i=0;i<n;i++)
	{
		if(a[i]%2)
		{
			
		    c[g]=a[i];
		    g++;
	    }
		else
		{
			b[h]=a[i];
			h++;
		}
	}
	for(i=0;i<h;i++)
    {
    	for(j=i+1;j<h;j++)
    	{
    		if(b[i]>b[j])
    		{
    		p=b[i];
    		b[i]=b[j];
    		b[j]=p;
    	    }
    	    
    	    
		}
		
	}
	for(i=0;i<g;i++)
    {
    	for(j=i+1;j<g;j++)
    	{
    	if(c[i]<c[j])
    		{
    		p=c[i];
    		c[i]=c[j];
    		c[j]=p;
    	    }	
    	}
    }
	for(i=0;i<h;i++)
	{
		cout<<"b"<<i<<" = "<<b[i]<<endl;
	}
	for(i=0;i<g;i++)
	{
		cout<<"c"<<i<<" = "<<c[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
 } 
