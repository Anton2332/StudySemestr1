#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>


using namespace std;

 void FM(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%11;
	}
}
 
 void Funcsional()
{
	cout<<endl;
	cout<<"---------------------------------------------------" <<endl;
	cout<<"|                      ����                       |"<<endl;
	cout<<"                ����в�� ���в��� Ĳ�              "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1. ��������� ������"<<endl;
	cout<<"2. �������� �������������� �����"<<endl;
	cout<<"3. ��������� �� ����� ���� �������� ������"<<endl;
	cout<<"4. ������� ������� ���� ����������� �� ������� X"<<endl;
	cout<<"5. ����� ���� Y �������� �� ����������"<<endl;
	cout<<"6. ������ ���������� ����� � ��������� ����"<<endl;
	cout<<"7. ����� � ������������ ������ ��������� ������� ���������� ������"<<endl;
	cout<<"8. �����"<<endl;
}
 
 void F1(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
 
void F2(int a[],int n)
{

	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
 	
}
 
 void F3(int a[],int n)
{
	int i,j,k;
	if(n%2==0)
	for(i=0;i<n/2;i++)
	{
		if(i==0)
		j=n-1;
		
		k=a[i]+a[j];
		j--;
		cout<<k<<" ";
	}
	else
	{
	for(i=0;i<(n-1)/2;i++)
	{
		if(i==0)
		j=n-1;
		
		k=a[i]+a[j];
		j--;
		cout<<k<<" ";
	}
	cout<<a[(n-1)/2];
	}	
}

void F4(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	if(i==x)
	{
		for(int j=i;j<n;j++)
		a[j]=a[j+1];
		
		n--;
	}
}

void F5(int a[],int n,int y)
{
	int i,j,k,t,q,f;
	if(n%y==0){
	k=n/y;
	for(i=0;i<k;i++)
	{
		for(f=i*y;f<(i+1)*y;f++)
		for(j=f+1;j<(i+1)*y;j++)
		{
			if(a[f]>a[j])
			{
				t=a[f];
				a[f]=a[j];
				a[j]=t;
            }
		}
		for(q=0;q<n;q++)
		cout<<a[q]<<" ";
		cout<<endl;
	
	    }
    }
    else
    {
       	k=n/y;
	for(i=0;i<k;i++)
	{
		for(f=i*y;f<(i+1)*y;f++)
		for(j=f+1;j<(i+1)*y;j++)
		{
			if(a[f]>a[j])
			{
				t=a[f];
				a[f]=a[j];
				a[j]=t;
            }
		}
		for(q=0;q<n;q++)
		cout<<a[q]<<" ";
		cout<<endl;
	
	    }
    }
	
	for(f=k*y;f<n;f++)
		for(j=f+1;j<n;j++)
		{
			if(a[f]>a[j])
			{
				t=a[f];
				a[f]=a[j];
				a[j]=t;
            }
		}
		for(q=0;q<n;q++)
		cout<<a[q]<<" ";
		cout<<endl;
}

void F6(int a[],int n)
{
    ofstream fout;
    fout.open("myFyle.txt");
    if(!fout.is_open())
    {
    	cout<<"������� !!!"<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		fout<<a[i]<<" ";
		cout<<endl;
		cout<<"���������� ���������!";
	}
	fout.close();
}

void F7(int a[],int n)
{
	int i,j,k,q=0;
	for(i=0;i<n;i++)
    {
    	k=i*i;
    	if(k>=n)
    	break;
	}
	k=i;
	int c[k][k];
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			c[i][j]=a[q];
			
			if(q>=n)
			c[i][j]=0;
			q++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
}

int main ()
{
	setlocale(LC_CTYPE, "ukr");
	int i,n,k,x,y,j,s;
	cout<<"��������� : ";
	cin>>n;
	k=n;
	int a[n],b[k];
	FM(a,n);
	for(i=0;i<k;i++)
	b[i]=a[i];
	cout<<"����� :"<<endl;
	F1(a,n);
	Funcsional();
	
	while(s!=8){
		
		cin>>s;
		switch(s){
		case 1:
			cout<<"����� :"<<endl;
			F1(a,n);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 2:
			cout<<"�������������� ����� :"<<endl;
			F2(a,n);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 3:
		    cout<<"���� ��� :"<<endl;
			F3(a,n);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 4:
			cout <<"�������� ���� "<<endl<<"X = ";
			cin>>x;
			F4(a,n,x);
			n--;
			F1(a,n);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 5:
			cout<<"Y = ";
			cin>>y;
			F5(a,n,y);
			
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 6:
			F6(b,k);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 7:
			F7(a,n);
			cout<<endl<<"�������� ���� "<<endl;
			break;
		case 8:
			cout<<"�������� ���������."<<endl;
		default:cout<<"������ �������� ��������"<<endl<<"��� ��������� �������� Enter";break;
	    }
		getch();
		system("cls");    	
		Funcsional();
	    
	}
	
	
	
	
	
	
    getch();
    return 0;
 }

