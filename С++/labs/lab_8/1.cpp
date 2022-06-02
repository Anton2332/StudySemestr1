#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	int i,n,p;
	cout<<"n = ";
	cin>>n;
	float a[n],b[n];
	for(i=0;i<n;i++)
	{
		a[i]=0.1*(rand()%111-50);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	for(i=1;i<n-1;i++)
	{
		b[i]=a[i-1]+a[i]+a[i+1];
	}
	for(i=1;i<n-1;i++)
	{
		cout<<"b = "<<b[i]<<endl;
	}
		
	
	
	
	getch();
	return 0;
 } 
