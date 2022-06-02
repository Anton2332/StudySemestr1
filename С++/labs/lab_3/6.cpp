#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	

    int x;
    cout << "x = ";
    cin >> x;
    
   
    if (x>0)
    {
    	cout <<"positive , ";
	}
	else 
	{
		if (x==0)
		{
			cout << "zeros";
		}
		else
		{
			cout <<"negative , ";
		}
	}
	if (x!=0)
	{
	
		if (x%2== 0)
		{
			cout <<"guys";
		}
		else 
		{
			cout <<"not a guy";
		}
	}


	getch();
	return 0;
 } 
