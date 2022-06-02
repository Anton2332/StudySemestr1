#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    float a,b,c,p;
    cout << "a = ";
    cin >>a;
    cout << "b = ";
    cin >>b;
    c = sqrt(a*a+b*b);
    p = a + b + c;
    cout << "c = "<<c<<"\n"<<"p = "<<p;

	getch();
	return 0;
 } 
