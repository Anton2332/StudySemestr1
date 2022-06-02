#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,j,n,m;
	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>a[i][j];
	cout<<"   a "<<endl;
	
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<a[j][i]<<" ";
	cout<<endl;
    }
    cout<<"    b "<<endl;
    for(i=0;i<n;i++)
    {
	
    for(j=0;j<m;j++)
    cout<<a[i][j]*10<<" ";
	cout<<endl;   
}
    
    
    getch();
    return 0;
 }
