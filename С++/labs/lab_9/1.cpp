#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	srand(time(NULL));
	int i,n,j,p;
	cout<<"n = ";
	cin>>n;
	int b[n];
	float a[n];
	for(i=0;i<n;i++)
	{
		a[i]=0.1*(rand()%201-100);	
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
	    b[i]=a[i];	
	}

	for(i=0;i<n;i++)	
   	if(b[i]%2 != 0)
	{
    for(j=i+1;j<n;j++)
        if(b[j]%2!=0 && b[i]<b[j])
        {
        	p=b[i];
        	b[i]=b[j];
        	b[j]=p;
		}
    }
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<" ";	
	}
	
	getch();
	return 0;
 } 
