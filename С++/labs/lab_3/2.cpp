#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	float x,y;
	cout << "x = ";
	cin >>x;
	if (x<-10)
	{
		y = 3 * x*x-pow(x,3);
	}
	else 
    {
    	if( x >= -10 && x<=10 )
    	{
    		y = sqrt(x-2*x*x);
		}
		else
		{
			y = cos(x-3);
		}
	}

  cout<<"y = "<<y;

	getch();
	return 0;
 } 
