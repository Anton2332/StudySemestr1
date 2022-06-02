#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	char s1[70];
    int i,gol=0;

cout<<"¬вед≥ть текст :";
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==65 || s1[i]==69 ||s1[i]==73 ||s1[i]==79 ||s1[i]==85 ||s1[i]==89 ||s1[i]==97||s1[i]==101||s1[i]==105||s1[i]==111 ||s1[i]==117||s1[i]==121)
		{
			gol++;
		}
		i++;
	}
	
	
	ofstream file5("Zavd5.txt");
	file5<<s1;
	file5.close();
	
    ofstream file51("Zavd5.txt",ios::app);
	file51<<endl;
    file51<<gol;
    file51.close();
    
    
    
    getch();
    return 0;
 }
