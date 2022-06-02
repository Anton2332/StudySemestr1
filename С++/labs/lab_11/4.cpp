#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n,k=0,q,b[n],s=0;
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
    		if(i==j && a[i][j]==0)
    		{
    		    b[k]=i;
    		    k++;
			}
		}
	}

	q=0;
	for(i=0;i<n;i++)
	{
	if(i == b[q])
			{
		for(j=0;j<n;j++)
		{
			
				s = s + a[i][j];
				q++;
			}
		}
	}

	cout<<"s = "<<float(s)/float(k*n);
    
    getch();
    return 0;
 }
