#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	int i,n;
	cout <<"n = ";
	cin >>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		a[i]=rand()%21;
		cout <<"a"<<i<<" = "<<a[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		a[i]=0;
		else
		if(a[i]%2==0)
		a[i]=1;
		else
		a[i]=0;
	}
	for (i=0;i<n;i++)
	cout <<"a"<<i<<" = "<<a[i]<<endl;
	
	
	
	
	getch();
	return 0;
 } 
