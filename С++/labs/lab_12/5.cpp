#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Func1(float a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%20;
	}
}
void Func2(float a[],int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void Func3(float a[],int n)
{
	float s=0;
	for(int i = 0;i<n;i++)
	{
		s=s+a[i];
	}
	s=s/n;
	cout<<"s = "<<s<<endl;
	for(int i= 0 ;i<n;i++)
	{
		if(a[i]<s)
		a[i]=a[i]*2;
		
	}
}



int main ()
{
	int n;
	cout<<"n = ";
	cin>>n;
	float a[n];
	Func1(a,n);
    Func2(a,n);
    cout<<endl;
    Func3(a,n);
    Func2(a,n);
    
    getch();
    return 0;
 }
