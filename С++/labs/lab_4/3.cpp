#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	float x,y,z,a,b,c;
	cout <<"x = ";
	cin >>x;
	cout << "y = ";
	cin >>y;
	cout << "z = ";
	cin >>z;
	cout << "a = ";
	cin >>a;
	cout <<"b = ";
	cin >>b;
	cout <<"c = ";
	cin >>c;
	
	if ( (x<=a && y<b && z<=c)||(x<=a && y<=c && z<=b)||(x<=b && y<=a && z<=c)||(x<=b && y<=c && z<=a)||(x<=c && y<=a && z<=b)||(x<=c && y<=b && z<=a) )
	cout <<"it is possible";
	else
	cout<<"can not";


	getch();
	return 0;
 } 
