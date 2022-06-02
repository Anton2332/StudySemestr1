#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,b,k;
	cout <<"b = ";
	cin >>b;
	cout<<"1";
	for (i=2;i<=b;i++)
	{
		k=2*i-1;
		cout<<" + "<<k;
	}
	cout << " = "<<b*b;
	
	
	
	getch();
	return 0;
 } 
