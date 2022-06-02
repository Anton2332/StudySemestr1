#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main()
{

    int n,max=0,min=-20,r,j,i,k=0;
    char s[70];
    gets(s);
    n=strlen(s);
    for (i=0;i<=n;i++)
    {
	if (isalpha(s[i]))
    k++;
    else 
    {
	if (k>max)
    max=k;
    if (k<min||min==-20)
    min=k;
    k=0;
    }}
cout<<"max="<<max<<endl<<"min="<<min;
 
 
 
 getch();
 return 0;
}
