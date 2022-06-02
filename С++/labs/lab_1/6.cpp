#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	int i,n;
	string s1,s2;
	ifstream file1("6.txt");
	while(!file1.eof())
	{
		getline(file1,s1);
		i=0;
		while(s1[i]!='\0')
		{
			if(s1[i]=='5')
			s2=s2+s1;
			i++;
		}
	}
	i=0;
	while(s2[i]!='\0')
	{
		if((s2[i]>96 &&s2[i]<123)||(s2[i]>64  &&s2[i]<91 )||s2[i]==' ' )
		cout<<s2[i];
		i++;
	}
	file1.close();
	
			
	getch();
    return 0;
 }
