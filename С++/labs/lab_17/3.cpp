#include <iostream> 
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

	int i,z=0,v=0;
	char s[70];
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		if(s[i]==40)
		v++;
		if(s[i]==41)
		z++;
		i++;
	}
	if(z==v)
	cout<<"rivno";
	else
	if(z>v)
	cout<<"vidkriv ";
	else
	cout<<"zakrv";
	
	
	
	getch();
	return 0;
}
