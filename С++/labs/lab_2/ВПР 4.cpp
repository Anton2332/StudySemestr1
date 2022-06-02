#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    int a,b;
    cout <<"a = ";
    cin >>a;
    b = a % 10;
    a = a / 10;
    a = b * 100 + a;
    cout << "a = "<< a;

	getch();
	return 0;
 } 
