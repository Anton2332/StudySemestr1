#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "func.h"
#include "realiz.cpp"
using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");
    cout<<"��������� : ";
    int n;
    cin>>n;
    int a[n],a2[n],array_n[n],array_p[n],z=0,kiln,kilp,k,q,i,l;
    menu();
    cout<<"��� ���� : ";
    cin>>k;
	while(k>9 ||k<1)
    {
    	system("cls");
    	menu();
    	cout<<"������ �������� �������� :";
    	cin>>k;
	} 
   	while(k!=1)
    {
	    if(k==9)
    	break;
    	system("cls");
    	menu();
    	cout<<"��� ������� ������ ����� :";
    	cin>>k;
    	
	}

	
	while (k!=9)
	{
		switch(k)
		{
			case 1:cout<<"�� ������ ����� ";
			cout<<endl;
			cout<<"1.���������";
			cout<<endl;
			cout<<"2.�� ��������� ���������� ";
			cout<<endl;
			cout<<"��� ���� : ";
			cin>>l;
			if(l<1 ||l>2)
			while(l!=1 || l!=2)
			{
				cout<<"������ �������� �������� :";
				cin>>l;
				if(l==1 || l==2)
				break;
			}
			if(l==1)
			mascin(a,n);
			else
			{
				int u;
				cout<<"������ �������� �� ����� ������� ��������� :";
				cin>>u;
				masr(a,n,u);
				masc(a,n);
				cout<<endl;
			}
			cout<<"����� ������� !!!";
			if(q==0){
			for(i=0;i<n;i++)
            a2[i]=a[i];
            q++;
	    	}
	    	z=0;
	    	
				kiln=kilnf(a,n);
				kilp=kilpf(a,n);
			break;	
			case 2:
			if(z==0)
				masc(a,n);
			else
			{
				
				cout<<"������"<<endl;
				masc(array_n,kiln);
				cout<<endl<<"���� "<<endl;
				masc(array_p,kilp);
			break;
		}
			case 3:
			cout<<"�� �� ������ ��������� :";
			cout<<endl;
			cout<<"1.�� ���������� ";
			cout<<endl;
			cout<<"2.�� ���������";
			cout<<endl;
			cout<<"��� ���� : ";	
			cin>>l;
			if(l<1 ||l>2)
			while(l!=1 || l!=2)
			{
				cout<<"������ �������� �������� :";
				cin>>l;
				if(l==1 || l==2)
				break;
			}	
				if(z!=0){
			
			
			if(l==1)
			{
				maszr(array_n,kiln);
				maszr(array_p,kilp);
			}
			else
			{
				massp(array_n,kiln);
				massp(array_p,kilp);
			}
			cout<<"����� ����������� !!!";
		}
		    else
		    {
			if(l==1)
			maszr(a,n);
			else
			massp(a,n);
			cout<<"����� ����������� !!!";
			}
			break;
			case 4:
			riznel(a,n);
			break;
			case 5:
			sumtsmas(a,n);
			break;
			
			
			
			case 6:maspr(a,n);cout<<endl<<"ĳ� ��������� !!!";break;
			case 7:masp(a,array_p,n);masnp(a,array_n,n);z++;
				cout<<"�������� "<<endl;
				masc(array_n,kiln);
				cout<<endl<<"������ "<<endl;
				masc(array_p,kilp);
			break;
			
			
			case 8:
			masstsn(a2,n);
			cout<<endl<<"ĳ� ���������!!!";
			break;
			case 9:cout<<"�������� ��������� ...";break;
			
			default :cout<<"������ �������� �������� : ";
			cin>>k;break;
		}
		if(k!=9)
		cout<<endl<<"��� ����������� �������� ���� :";
		getch();
		system("cls");
		menu();
		cin>>k;
	}
	
    
    getch();
    return 0;
 }
 
 
