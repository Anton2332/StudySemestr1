#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	int i,j,n;
	cout<<"n = ";
	cin >>n;
	
	float a[n][n],at[n][n],c[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];    
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		at[i][j]=a[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<at[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		c[i][j]=a[i][j]+at[i][j];
		}
	}
    
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
    getch();
    return 0;
 }
