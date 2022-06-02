#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{

    float x,y;
    cout << "x = ";
    cin >> x;
    if (x<-2)
    {
    	y = sin(x )+fabs(x);
    	cout << "y = "<<y;
	}
	else 
	{
	    if (x>= 0)
	    {
	    	y = sqrt(pow(x,3));
	    	cout << "y = "<<y;
		}
		else 
		cout << "ERROR";
	}
	

	getch();
	return 0;
 } 
