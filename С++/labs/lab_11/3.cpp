#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n;
	cout<<"n = ";
	cin >>n;
	
	float a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];    
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i<j && i+j+1<n)
    		a[i][j]=a[i][j]*10;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
    
    
    getch();
    return 0;
 }
