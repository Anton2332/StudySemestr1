#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

void Func1(float a,float b,float c)
{
	float s,p;
	if(a<b+c &&b<a+c && c<a+b)
	{
		cout<<"Good"<<endl;
	    p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"S = "<<s<<endl;	
	}
	
	else
	{
		cout<<"cannot be built";
	}
	
}
void Func2(float a,float b,float c)
{
	if(a<b+c &&b<a+c && c<a+b)
	{
	if(a>b && a>c)
	cout<<"nb = "<<a<<endl;
	else
	if(b>a && b >c)
	cout<<"nb = "<<b<<endl;
	else
	cout<<"nb = "<<c<<endl;
	
	float p;
	p=a+b+c;
	cout<<"p = "<<p<<endl;
	
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
	Func1(a,b,c);
	
	Func2(a,b,c);
    
    
    
    getch();
    return 0;
 }
