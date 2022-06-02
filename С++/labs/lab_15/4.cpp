#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main()
{

    int i,q,j,n,k;
    char s[70],s0[70];
    cout<<"s :"<<endl;
    gets(s);
    cout<<"s0 : "<<endl;
    gets(s0);
    n=strlen(s);
    k=strlen(s0);
    
    
    for(j=0;j<n;j++)
   {
        for(i=0;i<k;i++)
		{
			if(s[j]==s0[i])
			{
				for(q=j;q<n;q++)
				s[q]=s[q+1];
				n--;
				j--;
			}
			
		}	
   }
    puts(s);
    
    
 getch();
 return 0;
}
