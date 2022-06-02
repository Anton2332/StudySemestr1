#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i,min,max,s=0;
	float a[10];
	for(i=0;i<10;i++)
	{
		cout<<"a"<<i<<"  = ";
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
		s=s+a[i];
	}
	s=s/10;
	cout<<"min = "<<min<<endl;
	cout<<"max = "<<max<<endl;
	cout<<"s = "<<s;
	
	
	
	
	getch();
	return 0;
 } 
