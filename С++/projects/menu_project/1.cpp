#include<iostream> 
#include<conio.h>
#include<stdlib.h>
#include<time.h>
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
int SumMas(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}
float SaMas(int a[],int n)
{
	float sa=0;
	for(int i=0;i<n;i++)
	{
		sa+=a[i];
	}
	sa=float(sa)/n;
	return sa;
}
void VstMas(int a[],int n,int h,int g)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==h)
		{
			n++;
			for(int j=n-1;j>i;j--)
			{
				a[j] =a[j-1];
			}
			a[i+1]=g;
		}
	}
}
int KilkMas(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	if(a[i]==x)
	n++;
	return n;
}





void SortMas(int a[],int n)
{
	int p;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
	}
}

void Funcsion()
{
	cout<<endl;
	cout<<"---------------------------------------------------" <<endl;
	cout<<"|           ������� ������������ ����             |"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"          ����в�� � ����˲�� ���в��� Ĳ�         "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1. ��������� ������"<<endl;
	cout<<"2. ����� �������� ������"<<endl;
	cout<<"3. ������ ����������� ������"<<endl;
	cout<<"4. ���������� ������"<<endl;
	cout<<"5. ������� ���� �������� � �������� Y"<<endl;
	cout<<"6. �����"<<endl;
}



int main ()
{
setlocale(LC_CTYPE, "ukr");
	int i,j,n,k,x,y;
	cout<<"��������� :";
	cin>>n;
	int a[n];
	FuncMas(a,n);
	cout<<"����� :"<<endl;
	MasC(a,n);
	Funcsion();
    
    while(k!=6){
    	cin>>k;
    	switch(k)
    	{
    		case 1:
    			cout<<"����� :"<<endl;
				MasC(a,n);
				cout<<endl;
				cout<<"��� ����������� ������ ���� �� :";
				break;
    			
    		case 2:
			    cout<<"���� :"<<SumMas(a,n)<<endl;
				cout<<"��� ����������� ������ ���� �� :";
				break;
				
			case 3:
			    cout<<"������ :"<<SaMas(a,n)<<endl;
				cout<<"��� ����������� ������ ���� �� :";
				break;
				
			case 4:
			    cout<<"ϳ��� ���������� :"<<endl;
				SortMas(a,n);
				MasC(a,n);
				cout<<endl<<"��� ����������� ������ ���� �� :";
				break;
				
			case 5:
			    cout<<"������ :"<<endl<<"X = ";
				cin>>x;
				cout<<"Y = ";
				cin>>y;
				VstMas(a,n,x,y);
				n=KilkMas(a,n,x);
				MasC(a,n);
				cout<<endl<<"��� ����������� ������ ���� �� :";
				break;
			case 6:cout<<"�������� ��������� .....";break;	
			default :cout<<"������ �������� �������� !!!!";					
		}
		
		getch();
		system("cls");
		Funcsion();
	}
    
    return 0;
 }
