#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int n,i=1,s=0,b;
	cout <<"n = ";
	cin >>n;
	while (i<=n)
	{
		cout <<"b"<<i<<" = ";
		cin >>b;
		
		s = s+b;
		i++;
	}
	cout <<"Сума "<<s;
	
	
	
	
	getch();
	return 0;
 } 
