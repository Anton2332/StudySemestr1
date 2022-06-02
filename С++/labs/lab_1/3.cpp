#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	int i,n,slv=0;
	string s1,s2;
	
	ifstream file1("3.1.txt");
	while(!file1.eof())
	{
		getline(file1,s1);
		s2=s2+" "+s1;
		
	}
	file1.close();
	n=s2.length();
	
	for(i=0;i<n;i++)
	{
		if(s2[i]==' ' && s2[i+1]=='s')
		slv++;
	}
	cout<<slv;
	
		
	
	
			
	getch();
    return 0;
 }
