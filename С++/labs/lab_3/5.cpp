#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    float a,b,z;
    cout <<"a = ";
    cin >> a ;
    cout <<"b = ";
    cin >>b;
    if (b*b>3*a)
    {
    	if ( sin(a)>cos(b))
    	{
		
    	
    	    z = b*b *4 - 3*cos(b);
        }
        else 
        {
        	z = b*b *4 - 3*sin(a);
		}
    }
    else
    {
    	if ( sin(a)>cos(b))
    	{
		
    	
    	    z = 3*a*4 - 3*cos(b);
        }
        else 
        {
        	z = 3*a*4 - 3*sin(a);
		}	
	}
	cout << "z = "<<z;


	getch();
	return 0;
 } 
