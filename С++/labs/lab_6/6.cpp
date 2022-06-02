#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int n,i=1,b,p=0;
	float s=0,k=0;
	cout<<"n = ";
	cin>>n;
	do
	{
		cout <<"b"<<i<<" = ";
		cin >>b;
		if (b==5)
		{
			k++;
		}
		s=s+b;
		p++;
		i++;
	}while (i<=n);
	cout<<"Середн1й бал "<<s/p<<endl<<"K1льк1сть пят1рок "<<k;
	
	
	
	
	getch();
	return 0;
 } 
