#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int a,b,h,i;
	float k,s=0,c=0;
	cout <<"a = ";
	cin >> a;
	cout << "b = ";
	cin >>b;
	cout << "h = ";
	cin >> h;
	for (i=a;i<b;i=i+h)
	{
		s=s+i;
		c++;
	}
	
	k = s/c;
	cout <<"sa = "<<k;
	
	
	
	
	getch();
	return 0;
 } 
