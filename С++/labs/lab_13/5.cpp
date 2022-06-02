#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
float geom(int  n,float q)
{
	if(n==1)
	return 1;
	else
	return q*geom(n-1,q);
}



int main ()
{
	int n;
	float q,b1;
    cout<<"b1 = ";
    cin>>b1;
    cout<<"n = ";
    cin>>n;
    cout<<"q = ";
    cin>>q;
    cout<<b1*geom(n,q);
    
    
    
    
    
    getch();
    return 0;
 }
