#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,a[90],k,chsl,chsl1,j,parn=0;
	
    ofstream file31("Zavd3.txt",ios::app);
    file31<<" ";
    file31.close();
    ifstream file3("Zavd3.txt");
    while(!file3.eof())
    {
    	file3>>a[i];
    	i++;
	}
	k=i-1;
    file3.close();
    for(i=0;i<k;i++)
    {
    	chsl=a[i];
    	for(j==0;j>-1;j++)
    	{
    		chsl1=chsl%10;
    		if(chsl1%2==0)
    		{
    			chsl=chsl/10;
    			parn++;
			}
			else
			chsl=chsl/10;
    		if(chsl==0)
    		break;
    		
		}
	}
	ofstream file32("Zavd3.txt",ios::app);
	file32<<endl;
    file32<<parn;
    file32.close();
    cout<<"Програма завершена ";
	
	getch();
    return 0;
 }
