#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n,k=0;
	cout<<"n = ";
	cin >>n;
	
	float a[n][n],max,min;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];    
    
    max=a[0][0];
    min=a[0][0];
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j && max<a[i][j])
    		max=a[i][j];
    		
    		if(i==j && min>a[i][j])
    		min=a[i][j];
		}
	}
    cout<<"r = "<<max-min<<endl;
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i+j+1==n && a[i][j]==0)
    		k++;
		}
	}
    if(k!=0)
    {
    	for(i=0;i<n;i++)
    	{
    		cout<<a[i][0]<<endl;
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i][n-1]<<endl;
		}
	}
    
    getch();
    return 0;
 }
