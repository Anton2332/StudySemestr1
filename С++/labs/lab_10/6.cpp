#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    int i,j,n,m,k,p=0;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    cout<<"k = ";
    cin>>k;
    if(k<0)
    {
    	cout<<"ERROR";
	}
	else{
    float a[n][m];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>a[i][j];
    
    for(j=0;j<m;j++)
    {
    	if(a[k][j]<0)
    	a[k][j]=-1;
    	if(a[k][j]>0)
    	a[k][j]=1;
    	if(a[k][j]==0)
    	a[k][j]=0;
    	
	}
	for(i=0;i<n;i++){
    for(j=0;j<m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
	for(j=0;j<m;j++)
    if(a[k][j]==-1)
    p++;
    cout<<"p = "<<p;
}
    
    getch();
    return 0;
 }
