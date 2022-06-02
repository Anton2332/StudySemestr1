#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	float s,z,y;
	cout <<"s = ";
	cin >>s;
	cout<<"z - discount"<<"\n";
	if (s>=500 && s<=1000)
	{
		y = s*0.95;
		cout <<"s = "<<y<<"\n";
		z = s*0.05;
		cout <<"z = "<<z;
	}
	else
	if (s>=1001 &&s<=10000)
	{
		y = s*0.93;
		cout <<"s = "<<y<<"\n";
		z = s*0.07;
		cout <<"z = "<<z;
	}
	else
	if (s>=10001)
    {
    	y=s*0.91;
    	cout<<"s = "<<y<<"\n";
    	z = s*0.09;
		cout <<"z = "<<z;
	}


	getch();
	return 0;
 } 
