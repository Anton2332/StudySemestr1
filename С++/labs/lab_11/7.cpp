#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n,c1,c2;
	cout<<"n = ";
	cin >>n;
	cout<<"c1 = ";
	cin >>c1;
	cout<<"c2 = ";
	cin>>c2;
	int a[n][n],d=1;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    cin>>a[i][j];    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(j>=c1 && j<=c2)
    		{
    			d =d * a[i][j];
			}
		}
	}
    cout<<"d = "<<d;
    
    
    getch();
    return 0;
 }
