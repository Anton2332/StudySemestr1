#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    float y,x;
    cout << "x = ";
    cin >> x;
    y = pow(x,3) - 4*x*x - 5*x +cos(x);
	cout << "y = "<<y;

	getch();
	return 0;
 } 
