#include <iostream> 
#include <conio.h>

using namespace std;
int Maxi(int a[],int n)
{
	int max;
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
int Mini(int a[],int n)
{
	int min ;
	min = a[0];
	for(int i=0;i<n;i++)
	if(min>a[i])
	min=a[i];
	return min;
	
}

int MaxMin(int a,int b)
{
	int r;
	r=b-a;
	return r;
}



int main ()
{
	int i,n,max,min,r;
	cout<<"n = ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
    max = Maxi(a,n);
    min = Mini(a,n);
   
    r = MaxMin(min,max);
    cout<<"r = "<<r;
    
    
    getch();
    return 0;
 }
