#include <string.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()

{
    char s[70];
    int n,i,j;
    gets(s);
    n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((int)s[i]==32)
		{
			n=n+6;
			for(j=n-1;j>i;j--)
			s[j]=s[j-5];
			s[i]='P';
			s[i+1]='r';
			s[i+2]='o';
			s[i+3]='b';
			s[i+4]='i';
			s[i+5]='l';
		}
	}
	puts(s);
	getch();
	return 0;
}
