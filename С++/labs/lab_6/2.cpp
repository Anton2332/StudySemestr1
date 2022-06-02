#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int n,i;
	float s=0;
	
	cout <<"n = ";
	cin >>n;
	i = 1;
	while(i<=n)
	{
		
		s = s+1.0/i;
		i++;
		
	}
	cout <<"Сума "<<s;
	
	
	
	
	getch();
	return 0;
 } 
