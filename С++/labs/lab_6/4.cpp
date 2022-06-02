#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int n,i=1,max=0,min=0,r,b;
	cout <<"n = ";
	cin >>n;
	
	do
    {
    	cout <<"b"<<i<<" = ";
    	cin >>b;
    	
    	if (b>=max)
    	{
    		max = b;
    	}
    	if (b<=min)
    	{
    		min=b;
		}
		if (b ==0)
		{
			break;
		}
    	i++;
    }while (i<=n);
	cout <<"Р1зниця "<<max-min;
	
	
	getch();
	return 0;
 } 
