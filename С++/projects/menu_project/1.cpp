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
	cout<<"|           ПРИКЛАД ВИКОРИСТАННЯ МЕНЮ             |"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"          ВИБЕРІТЬ З ПЕРЕЛІКУ ПОТРІБНУ ДІЮ         "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1. Виведення масиву"<<endl;
	cout<<"2. Сумма єлементів масиву"<<endl;
	cout<<"3. Середнє арифметичне масиву"<<endl;
	cout<<"4. Сортування масиву"<<endl;
	cout<<"5. Вставка після елемента Х значення Y"<<endl;
	cout<<"6. Вихід"<<endl;
}



int main ()
{
setlocale(LC_CTYPE, "ukr");
	int i,j,n,k,x,y;
	cout<<"Розмірність :";
	cin>>n;
	int a[n];
	FuncMas(a,n);
	cout<<"Масив :"<<endl;
	MasC(a,n);
	Funcsion();
    
    while(k!=6){
    	cin>>k;
    	switch(k)
    	{
    		case 1:
    			cout<<"Масив :"<<endl;
				MasC(a,n);
				cout<<endl;
				cout<<"Для продовження введіть будь що :";
				break;
    			
    		case 2:
			    cout<<"Сума :"<<SumMas(a,n)<<endl;
				cout<<"Для продовження введіть будь що :";
				break;
				
			case 3:
			    cout<<"Середнє :"<<SaMas(a,n)<<endl;
				cout<<"Для продовження введіть будь що :";
				break;
				
			case 4:
			    cout<<"Після сортування :"<<endl;
				SortMas(a,n);
				MasC(a,n);
				cout<<endl<<"Для продовження введіть будь що :";
				break;
				
			case 5:
			    cout<<"Введіть :"<<endl<<"X = ";
				cin>>x;
				cout<<"Y = ";
				cin>>y;
				VstMas(a,n,x,y);
				n=KilkMas(a,n,x);
				MasC(a,n);
				cout<<endl<<"Для продовження введіть будь що :";
				break;
			case 6:cout<<"Програма завершина .....";break;	
			default :cout<<"Введіть коректне значення !!!!";					
		}
		
		getch();
		system("cls");
		Funcsion();
	}
    
    return 0;
 }
