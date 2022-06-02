#include <iostream> 
#include <conio.h>

using namespace std;
float Cin (float a ,float b,float c,float d)
{
	float g;
	g = a*b*c*d;
	return g;
	
}


int main ()
{
	float c,sh,v,n,vc;
	cout<<"c = ";
	cin>>c;
	cout<<"sh = ";
	cin>>sh;
	cout<<"v = ";
	cin>>v;
	cout<<"n = ";
	cin>>n;
	vc=Cin(c,sh,v,n);
	cout<<"cin = "<<vc;
	
	
	
    
    
    
    getch();
    return 0;
 }
