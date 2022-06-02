#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    float a,b,c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b ;
    cout << "c = ";
    cin >> c;
    
    if (b>a && c>b)
    {
    	a = a*2;
    	b = b*2;
    	c = c*2;
	}
	else 
	{
		a = a * -1;
		b = b * -1;
		c = c * -1;
	}
	cout << "a = "<<a<<endl;
	cout << "b = "<<b<<endl;
	cout << "c = "<<c;

	getch();
	return 0;
 } 
