#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
    int a,b,n,c=0,i;
    cout <<"a = ";
    cin >> a ;
    cout << "n = ";
    cin >> n;
    b=a+n;
    for (i=a;i<b;i++)
    {
    	if (i%3==0 && i%5!=0)
    	{
    		c++;
		}
		else
		{
			
		}
		
	}
	cout <<c<<endl;
	
	
	
	getch();
	return 0;
 } 
