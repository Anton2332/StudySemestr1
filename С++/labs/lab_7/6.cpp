#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	int i,n,k=0;
	cout <<"n = ";
	cin >>n;
	float a[n], d ,s=1;
	for(i=0;i<n;i++)
	{
		a[i]=(rand()%21-10)/10.0;
		cout <<a[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0.5 && a[i]<=1.0)
		{
		
		s=s*a[i];
		k++;
	    }
	}
	d=pow(s,1.0/k);
	cout<<"d = "<<d;
	
	
	
	getch();
	return 0;
 } 
