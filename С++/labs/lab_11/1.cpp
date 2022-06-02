#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	int i,j,n;
	cout<<"n = ";
	cin >>n;
	
	float a[n][n],b[n][n],c[n][n];
	cout<<"   a"<<endl;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];
	cout<<"   b"<<endl;    
    for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>b[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    	{
    		if(i==j)
    		swap(a[i][j],b[i][j]);
		}
	
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"   a"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
    cout<<"   b"<<endl;
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
    cout<<"   c"<<endl;
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
    
    getch();
    return 0;
 }
