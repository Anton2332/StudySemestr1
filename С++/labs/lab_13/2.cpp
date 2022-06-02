#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
float SrAr(int a[],int n);
void FuncMas(int a[],int n);

void FuncMas(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%11;
	}
}
float SrAr(int a[],int n)
{
	int i;
	float s;
	for(i=0;i<n;i++)
	s=s+a[i];
	s=s/n;
	return s;
}

void MasC(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int KrMas(int a[],int n)
{
    int x,i,k=0;
	
	
	cout<<"x ne dorivnue 0"<<endl;
	while(x==0){
		cout<<"x = ";
		cin>>x;
	}
	for(i=0;i<n;i++)
	if(a[i]%x==0)
	k++;
	
	for(i=0;i<n;i++)
	if (a[i]==0)
	k--;
	
	
	return k;	
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
    cout<<"srar = "<<SrAr(a,n);
    cout<<endl;
    l=KrMas(a,n);
    cout<<"kratni = "<<l;
    
    
    getch();
    return 0;
 }
