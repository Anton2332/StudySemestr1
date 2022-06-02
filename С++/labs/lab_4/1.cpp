#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	float a,b,c,d1,d2;
	cout << "A = ";
	cin >>a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >>c;
	if (a>=0)
	{
		if (b>=0)
		{
			if(b>=a)
			d1 = b-a;
			else
			d1 = a-b;
		}
		else
		d1 = fabs(b)+a; 
		if (c>=0)
		{
			if(c>=a)
			d2 = c-a;
			else
			d2 = a-c;
		}
		else
		d2 = fabs(c)+a; 
	}
	else
	{
	if (b>=0)
	    {
	    	d1 = fabs(a)+b;
		}
		else
		{
			if (b<=a)
			{
				d1 = fabs(b)-fabs(a);
			}
			else
			d1 = fabs(a)-fabs(b);
		}
	if (c>=0)
	    {
	    	d2 = fabs(a)+c;
		}
		else
		{
			if (c<=a)
			{
				d2 = fabs(c)-fabs(a);
			}
			else
			d2 = fabs(a)-fabs(c);
		}	
	}
	if (d1<d2)
	{
		cout<<"d = "<<d1<<"\n"<<"B = "<<b;
	}
	else
	cout<<"d = "<<d2<<"\n"<<"C = "<<c;


	getch();
	return 0;
 } 
