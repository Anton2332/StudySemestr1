#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	int i,j,n,max;
	cout<<"n = ";
	cin>>n;
	float a[n][n],b[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	max=a[0][0];
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i==j && fabs(max)<fabs(a[i][j]))
        max=fabs(a[i][j]);
	}
}
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
    	b[i][j]=a[i][j]/float(fabs(max));
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	cout<<b[i][j]<<" ";
    	cout<<endl;
	}
    
    getch();
    return 0;
 }
