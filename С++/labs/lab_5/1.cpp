#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int a,i;
	cout <<"a >15"<<endl;
	cout <<"a = ";
	cin>>a;
	
	
	if (a>100)
	{
		if (a%2==0)
	{
		a--;
	
	    for (i=a-2;i>=100;i=i-2)
	    {
	       cout<<"a = "<<i*i<<endl; 	
		}
	}
	else
	{
		for (i=a-2;i>=100;i=i-2)
	    {
	       cout<<"a = "<<i*i<<endl; 	
		}
	}
	}
	else 
	{
			if (a%2==0)
	{
		a--;
	
	    for (i=a+2;i<=100;i=i+2)
	    {
	       cout<<"a = "<<i*i<<endl; 	
		}
	}
	else
	{
		for (i=a+2;i<=100;i=i+2)
	    {
	       cout<<"a = "<<i*i<<endl; 	
		}
	}
	}
	
	
	
	getch();
	return 0;
 } 
