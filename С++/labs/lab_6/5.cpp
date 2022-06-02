#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int b,i,n;
	float s=0.0,k=0;
	cout <<"n = ";
	cin>>n;
	i=1;
	do
	{
		cout <<"b"<<i<<" = ";
		cin>>b;
		i++;
		if(b>=0)
		{
		
		    s=s+b;
		    k++;
	    }
	    
	    
	
	}while(b<=n);
	
	cout <<"Середнє "<<s/k;
	
	
	
	getch();
	return 0;
 } 
