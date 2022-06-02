#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	int i,j;
	float a[5][5];
	for(i=0;i<5;i++)
	cin>>a[0][i];
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		a[i][j]=pow(a[0][j],i+1);
	}
    for(i=0;i<5;i++){
	for(j=0;j<5;j++)
	
	    cout<<a[i][j]<<" ";
	    cout<<endl;
	}
    
    
    
    getch();
    return 0;
 }
