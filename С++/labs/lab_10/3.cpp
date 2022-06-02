#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n,k=0;
	cout<<"n = ";
	cin>>n;
	int a[n][n];
	float s[n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		k = k+a[i][j];
	}
	s[i]=k/float(n);
	k=0;
}
    for(i=0;i<n;i++)
    cout<<s[i]<<" ";
    
    
    
    getch();
    return 0;
 }
