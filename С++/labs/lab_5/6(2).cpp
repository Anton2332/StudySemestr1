#include <iostream> 
#include <conio.h>
#include <math.h>

using namespace std;

int main ()
{
    int a,b,n,i,k,c=0;
    cout <<"a = ";
    cin >> a ;
    cout << "n = ";
    cin >> n;
    b=a+n;
    for (i=a;i<b;i++)
    {
    	k = sqrt(i);
    	if (k%2==0)
    	{
    		c++;
		}
		
	}
	
	cout <<c<<endl;
	
	
	getch();
	return 0;
 } 
