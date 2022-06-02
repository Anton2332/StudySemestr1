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
		if((s[i]>64 &&s[i]<91)||(s[i]> 47&&s[i]<58))
		k++;
		i++;
	}
	cout<<"n = "<<k;
	
	
	
	getch();
	return 0;
}
