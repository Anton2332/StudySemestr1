#include <iostream> 
#include <conio.h>
#include <locale>


using namespace std;

int main ()
{
	int z=0,z1=1939,z2=1991,z3=13,z4=1991,z5=1945,v1,v2,v3,v4,v5;
	setlocale(LC_ALL, "Ukrainian");
	cout << "� ����� ���1 �������� ����� ��1���� �1���?"<<"\n"<<"�1����1��:";
    cin>>v1;
    cout << "� ����� ���1 �������� ������������ ����1�� ��������?"<<"\n"<<"�1����1��:";
    cin>>v2;
    cout << "���1�� 1� 169 ?"<<"\n"<<"�1����1��:";
    cin>>v3;
    cout << "���� ������ ������� ��������1���?"<<"\n"<<"�1����1��:";
    cin>>v4;
    cout << "���� ���1������� ����� ��1���� �1���?"<<"\n"<<"�1����1��:";
    cin>>v5;
  
    
    if (z1==v1)
    z++;
    if (z2==v2)
    z++;
    if (z3==v3)
    z++;
    if (z4==v4)
    z++;
    if (z5==v5)
    z++;
    
    cout<<"��� = "<<z;
    

	getch();
	return 0;
 } 
