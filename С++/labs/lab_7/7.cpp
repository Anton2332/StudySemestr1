#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	int i,n,k=0,c=0;
	cout <<"n = ";
	cin >>n;
	float a[n],s=0,d=1;
	for(i=0;i<n;i++)
	{
		a[i]=(rand()%5001)/100.0;
		cout <<"a"<<i<<" = "<<a[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		if(a[i]>=5.0 &&a[i]<=15.0)
		d=d*a[i];
		
	}
	for(i=0;i<n;i++)
	{
if(i%2==0)
		{
		
		if(a[i]<a[i+2])
		{
		
		k++;
		
	    }else
		{
		   c++;	
		}
	}
		


    }
   
		if(k!=0)
	cout <<"s = "<<s<<endl;
	
	if(c!=0)
	cout<<"d = "<<d<<endl;
	
	getch();
	return 0;
 } 
