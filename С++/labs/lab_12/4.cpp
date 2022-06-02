#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

int sp(int b[],int m)
{
  int i,s=0;  
  for(i=0;i<m;i++)
  {
      if(b[i]%2==0)
      s+=b[i];
  }
  return s;
}
int sn(int b[],int m)
{
  int i,v=0;  
  for(i=0;i<m;i++)
  {
      if(b[i]%2==!0)
      v+=b[i];
  }
  return v;
}
int main()
{
int p,np,n,i;
cout<<"n = ";
cin>>n;
int a[n];

for(i=0;i<n;i++)
cin>>a[i];
p=sp(a,n);
np=sn(a,n);
if(p>np)
cout<<"R = "<<p-np;
else
cout<<"R = "<<np-p;
  
  getch();
  return 0;
}
