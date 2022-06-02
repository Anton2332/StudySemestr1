#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;
void menu ()
{
	cout<<"Виберіть що реалізувати ? "<<endl;
	cout<<"1.Ввід масиву "<<endl;
	cout<<"2.Виведення масиву "<<endl;
	cout<<"3.Сортування масиву "<<endl;
	cout<<"4.Визначимо яких елементів більше "<<endl;
	cout<<"5.Суму цифр масиву "<<endl;
	cout<<"6.Перезапишемо кожен елемент"<<endl;
	cout<<"7.Строворимо два масиви один з парними а інший з непарними"<<endl;
	cout<<"8.Стискаємо початковий масив"<<endl;
	cout<<"9.Вихід"<<endl;
}
void mascin(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
}
void masr(int a[],int n,int k)
{
	srand(time(NULL));
	int i ,f;
	f=k+1;
	for(i=0;i<n;i++)
	a[i]=rand()%f;
}
void masc(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void maszr (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j])
	swap(a[i],a[j]);
}
void massp (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]<a[j])
	swap(a[i],a[j]);
}
void riznel(int a[],int n)
{
	int i,k,p;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		k++;
		if(a[i]%2==0)
		p++;
	}
	
	if(p==k)
	cout<<"Порівну!!!";
	else
	if(p<k)
	cout<<"Непарних!!!";
	else
	cout<<"Парних!!!";
}
int sumts(int a)
{
	int sum=0,b;
	
	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	return sum;
}
void sumtsmas(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+sumts(fabs(a[i]));
	}
	cout<<"Сума цифр : "<<sum;
}
int zvch(int a)
{
	int n=10,k;
	int i=0,b[n],sum=0;
	while(a!=0)
	{
		b[i]=a%10;
		a=a/10;	
		i++;
	}
	k=i-1;
	for(int j=0;j<i;j++)
	{
	sum=sum+b[j]*pow(10 , k);
	k--;		
	}
	return sum;
}
void maspr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	a[i]=zvch(a[i]);
}
void masstsn(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			
			a[i]=a[i]+a[i];
			for( j=i+1;j<n;j++)
		    {
		    	a[j]=a[j+1];
			}
			n--;
			i++;
		}
	}
    for(i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
}
int kilpf(int a[],int n)
{
	int i,p=0;
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	{
		p++;
	}
	return p;
}
int kilnf(int a[],int n)
{
	int i,np=0;
	for(i=0;i<n;i++)
	if(a[i]%2!=0)
	{
		np++;
	}
	return np;
}
void masp(int a[],int b[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
}
void masnp(int a[],int b[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			
			b[j]=a[i];
			j++;
		}
	}
}


