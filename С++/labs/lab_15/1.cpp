#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main ()
{
	int i,j,n;
	char s[70];
    gets(s);
    n=strlen(s);
	for(i=0;i<n;i++)
	{
	    if(s[i]==32)
		{
			if(s[i+1]==32)
			{
				for(j=i+1;j<n;j++)
				{
					s[j]=s[j+1];
				}
				n--;
				i--;
			}
		}	
	}
	n=n+2;
	for(j=n-1;j>1;j--)
	{
		s[j]=s[j-2];
	}
	s[0]='1';
	s[1]='2';
	s[2]='3';
	s[3]='4';
	s[4]='5';
	
	puts(s);
    getch();
    return 0;
 }
