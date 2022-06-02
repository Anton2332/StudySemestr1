#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;
void Roots(float a,float b,float c)
{
	float d,x1,x2;
	d=b*b -4*a*c;
	if(d<0)
	cout<<"dont";
	else
	if(d==0)
	cout<<"x = "<<(-1*b)/2*a;
	else
	{
		x1=(-1*b-sqrt(d))/2*a;
		x2=(-1*b+sqrt(d))/2*a;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
	}
	
}




int main ()
{
	float a,b,c;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	Roots(a,b,c);
	
    
    
    
    getch();
    return 0;
 }
