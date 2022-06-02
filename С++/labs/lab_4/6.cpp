#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    int N;
    float A,B,x1,x2,x3,x4;
    cout <<"A = ";
    cin >>A;
    cout <<"B = ";
    cin >>B;
    cout << "N = ";
    cin >>N;
    x1 = A+B;
    x3 = A*B;
    if (A>B)
    x2 = A-B;
    else
    x2 = B-A;
    
    if (B!=0)
	x4 = A/B;
    else
    {
    	x4 =0;
	}
	
    

	
	
    switch(N)
    {
    	case 1 :cout<<x1;break;
    	case 2 :cout<<x2;break;
    	case 3 :cout<<x3;break;
    	case 4 :cout<<x4;break;
    	default:cout<<"ERROR";
	}

	getch();
	return 0;
 } 
