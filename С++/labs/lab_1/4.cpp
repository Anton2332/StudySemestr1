#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	string s1,s2;
	int i,n,k=0;
    ifstream file1("test.in.txt");
    while(!file1.eof()){
	
	getline(file1,s1);
	i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]=='h'&&s1[i+1]=='e'&&s1[i+2]=='l'&&s1[i+3]=='l'&&s1[i+4]=='o')
		{
			s2=s2+" "+s1;
			k++;
		 } 
		i++;
	}
    }
    file1.close();
    ofstream file2("test.out.txt");
    file2<<s2;
    file2<<"   - ";
    file2<<k;
    file2.close();



		
	getch();
    return 0;
 }
