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
	int a[n],b[n],c[n];
	for (i=0;i<n;i++)
	{
		a[i]=rand()%21-10;
		b[i]=rand()%21-10;
		c[i]=a[i]-b[i];
		cout <<"a"<<i<<" = "<<a[i]<<endl;
		cout <<"b"<<i<<" = "<<b[i]<<endl;
		cout <<"c"<<i<<" = "<<c[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
 } 
