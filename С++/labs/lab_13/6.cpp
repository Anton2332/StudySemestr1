#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
float fact2(int  n)
{
	if(n==1)
	return 1;
	else
	return n*fact2(n-2);
}



int main ()
{
	int n;
    cout<<"n = ";
    cin>>n;
    
    cout<<"n!! = "<<fact2(n);
    
    
    
    
    getch();
    return 0;
 }
