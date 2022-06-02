#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void FuncMas(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%11;
	}
}


void MasC(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int MasMin(int a[],int k);
int MasMax(int a[],int k);
void NulMas(int a[],int n)
{
	int i,j,k,p,max,min;
	for(i=0;i<n;i++)
	if(a[i]==0)
	{
		if(i!=0)
		{
		n++;
		n++;
		k==i;
		
		max=MasMax(a,k);
		min=MasMin(a,k);
		cout<<endl;
		cout<<max<<" "<<min<<endl;
		for(j=n-1;j>i;j--)
		{
			a[j]=a[j-2];
		}
		a[i+1]=min;
		a[i+2]=max;
		
	}
	i+=2;
	}
	MasC(a,n);
}
int MasMax(int a[],int k)
{
	int i,max;
	max=a[0];
	for(i=0;i<k;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
int MasMin(int a[],int k)
{
	int i,min=a[0];
	for(i=0;i<k;i++)
	if(min>a[i])
	min=a[i];
	return min;
}


int main ()
{
	
    int n,s,l;
    cout<<"n = ";
    cin>>n;
    int a[n];
    FuncMas(a,n);
    MasC(a,n);
    cout<<endl;
    NulMas(a,n);
    
    getch();
    return 0;
 }
