#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	int i,j,n,k,p;
	cout<<"n = ";
	cin >>n;
	cout<<"k = ";
	cin>>k;
	cout<<"p = ";
	cin>>p;
	
	float a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];    
    for(i=0;i<n;i++)
    {
    	swap(a[i][k],a[i][p]);
    	
    	
    	
    	
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
