#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	int i=0,j,q=0,n,a[100],b[16],c[4][4],sum=0;
	ofstream file1("5.txt",ios::app);
	file1<<" ";
	file1.close();
	ifstream file2("5.txt");
	while(!file2.eof())
	{
		file2>>a[i];
		i++;
	}
	file2.close();
	n=i-2;

	i=0;
	
	for(j=n;j>n-16;j--)
	{
		
	    b[i]=a[j];
		i++;	
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=b[q];
			q++;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>j)
			sum=sum+c[i][j];
		}
	}
	cout<<"sum = "<<sum;
	
	
		
	getch();
    return 0;
 }
