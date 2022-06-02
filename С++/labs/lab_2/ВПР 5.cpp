#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    float a,b,c,S,V;
    cout << "a = ";
    cin >>a;
    cout << "b = ";
    cin >>b;
    cout << "c = ";
    cin >> c;
    V = a * b * c;
    S = 2 * a * b + 2 * b * c + 2 * a *c;
	cout << "S = "<<S<<"\n"<<"V = "<<V; 

	getch();
	return 0;
 } 
