#include <iostream> 
#include <conio.h>
#include <locale>
using namespace std;

int main ()
{
	
	int n;
	setlocale(LC_ALL, "Ukrainian");
	cout<<"1 - �����1��� \n2 - �1������\n3 - ������\n4 - ������\n5 - �'������\n6 - ������\n7 - ���1�� \n";
	cout<<"n = ";
	cin >>n;
	switch(n)
	{
		case 1:cout<<"1 ���� - ��1�� \n2 ���� - �1����\n3 ���� - ���� ����������\n4 ���� - ����";break;
		case 2:cout<<"1 ���� - ����\n2 ���� - ����\n3 ���� - ��������1����� �� �������������\n4 ���� - ���� ����������";break;
		case 3:cout<<"1 ���� - ����\n2 ���� - �1���� \n3 ���� - ��������� ����\n4 ���� - ����";break;
		case 4:cout<<"1 ���� - ��������� ����������\n2 ���� - ��������� ����������\n3 ���� - ���� ����������\n4 ���� - ����";break;
		case 5:cout<<"1 ���� - ����\n2 ���� - ��������1����� �� �������������\n3 ���� - ���� ����������\n4 ���� - ����";break;
		case 6:cout<<"���� ���.\n���!���!���!";break;
		case 7:cout<<"���� ���.\n���!���!���!";break;
		default:cout<<"ERROR";
	}


	getch();
	return 0;
 } 
