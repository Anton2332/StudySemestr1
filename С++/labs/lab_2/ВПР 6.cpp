#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    float o,x1,x2,x3,y1,y2,y3,v1,v2,v3,p,S,l1,l2,l3,c1,c2,c3;
    cout <<"x1 = ";
    cin >>x1;
    cout <<"y1 = ";
    cin >>y1;
    cout << "x2 = ";
    cin >> x2;
    cout <<"y2 = ";
    cin >> y2;
    cout <<"x3 = ";
    cin >>x3;
    cout <<"y3 = ";
    cin >>y3;
    l1 = x2- x1;
    l2 = x3 - x2;
    l3 = x1 - x3;
    c1 = y2 - y1;
    c2 = y3 - y2;
    c3 = y1 - y3;
    v1 = sqrt(l1*l1+c1*c1);
    v2 = sqrt(l2*l2 + c2*c2);
    v3 = sqrt(l3*l3 + c3*c3);
    p = v1+v2+v3;
    o = p /2;
    S = sqrt(o*(o-v1)*(o-v2)*(o-v3));
    cout << "p = "<<p<<"\n"<<"S = "<<S;
    

	getch();
	return 0;
 } 
