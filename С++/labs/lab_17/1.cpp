#include <iostream> 
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	int i,k=0;
	char s[70];
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		if((s[i]>47 && s[i]<58)||s[i]==32)
		k++;
		i++;
	}
	cout<<k;
	
	
	
	getch();
	return 0;
}
