#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	float a[100],b[100],c[100];
	int i,j=0,q,n,k;
	ofstream file11("1.1.txt",ios::app);
    file11<<" ";
    file11.close();
	ifstream file3("1.1.txt");
    while(!file3.eof())
    {
    	file3>>a[i];
    	i++;
	}
	n=i-1;
    file3.close();
	ofstream file31("1.2.txt",ios::app);
    file31<<" ";
    file31.close();
    i=0;
	ifstream file32("1.2.txt");
    while(!file32.eof())
    {
    	file32>>b[i];
    	i++;
	}
	k=i-1;
    file32.close();
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<k;i++)
    cout<<b[i]<<" ";
    
	if(k>n)
	for(i=0;i<k;i++)
	{
		if(n>=i)
		{
			c[j]=a[i];
		    j++;
		}
		c[j]=b[i];
		j++;
	}
	else
	{
	    for(i=0;i<n;i++)
	{
		
		
		c[j]=a[i];
		j++;
			
		if(k>=i)
		{
			c[j]=b[i];
		j++;
		}
	}
	}
	q=j ;
	cout<<endl;
	for(i=0;i<q;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	ofstream file33("1.3.txt");
	for(i=0;i<q;i++)
	{
		file33<<c[i]<<" ";
	}
	file33.close();
		
	getch();
    return 0;
 }
