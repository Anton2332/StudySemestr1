#include <iostream> 
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	int i=0;
	char s[70];
	gets(s);
	
	while(s[i]!='\0')
	{
		s[i]=char((int)s[i]+2);
		i++;
	}
	puts(s);
	
	
	
	getch();
	return 0;
}
