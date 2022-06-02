#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    float a,b,c,x1,x2,D;
    cout << "a = ";
    cin >> a ;
    cout << "b = ";
    cin >> b ;
    cout << "c = ";
    cin >>c;
    
    
    D = b*b - 4*a*c;
    if (D>=0)
    {
    	x1 = (-b +sqrt(D))/2*a;
    	x2 = (-b -sqrt(D))/2*a;
    	cout<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2;
	}
    else
    {
    	cout << "ERROR";
	}
	getch();
	return 0;
 } 
