#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	int i,n,a=0,o=0,e=0,y=0,u=0;
	string s1,s2;
	ifstream file1("2.1.txt");
	while(!file1.eof())
	{
		getline(file1,s1);
		s2=s2+" "+s1;
		
	}
	file1.close();
	
	n=s2.length();
	for(i=0;i<n;i++)
	{
	    if(s2[i]=='a'||s2[i]=='A')
	    a++;
	    if(s2[i]=='o'||s2[i]=='O')
	    o++;
	    if(s2[i]=='e'||s2[i]=='E')
	    e++;
	    if(s2[i]=='y'||s2[i]=='Y')
	    y++;
	    if(s2[i]=='u'||s2[i]=='U')
	    u++;
	}
	cout<<"a = "<<a<<endl;
	cout<<"o = "<<o<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"e = "<<e<<endl;
	cout<<"u = "<<u<<endl;
	
	
	
	
	
	
	
	
	
			
	getch();
    return 0;
 }
