#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main ()
{
	int i,j,n,q,k;
	char s[70],s0[140];
	cout<<"s :"<<endl;
    gets(s);
    cout<<"s0 :"<<endl;
    gets(s0);
    n=strlen(s);
    k=strlen(s0);
    i=0;
    q=k+n;
	j=k;
    while(s[i]!='\0')
    {
    	
    	
        s0[j]=s[i];
		
    	j++;
    	i++;
	}
    puts(s0);
	k=strlen(s0);
	cout<<"K = "<<k<<endl;
	i=0;
	while(s0[i]!='\0')
	{
		if(s[i]>47 ||s[i]<58)
		s[i]=95;
		i++;
	}
	puts(s0);
    getch();
    return 0;
 }
