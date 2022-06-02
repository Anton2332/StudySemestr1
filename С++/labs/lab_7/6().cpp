#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	int i,n;
	cout <<"n = ";
	cin >>n;
	float a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand()%(21-10)/(10.0);
		cout <<a[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
 } 
