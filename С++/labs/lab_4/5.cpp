#include <iostream> 
#include <conio.h>
#include <locale>
using namespace std;

int main ()
{
	
	int n;
	setlocale(LC_ALL, "Ukrainian");
	cout<<"1 - Понед1лок \n2 - В1второк\n3 - Середа\n4 - Четвер\n5 - П'ятниця\n6 - Субота\n7 - Нед1ля \n";
	cout<<"n = ";
	cin >>n;
	switch(n)
	{
		case 1:cout<<"1 Пара - АП1КУ \n2 Пара - Ф1зика\n3 Пара - Вища математика\n4 Пара - Немає";break;
		case 2:cout<<"1 Пара - Немає\n2 Пара - Немає\n3 Пара - Алгоритм1зація та програмування\n4 Пара - Вища математика";break;
		case 3:cout<<"1 Пара - Немає\n2 Пара - Ф1зика \n3 Пара - Англійська мова\n4 Пара - Немає";break;
		case 4:cout<<"1 Пара - Дискретна математика\n2 Пара - Дискретна математика\n3 Пара - Вища математика\n4 Пара - Немає";break;
		case 5:cout<<"1 Пара - Немає\n2 Пара - Алгоритм1зація та програмування\n3 Пара - Вища математика\n4 Пара - Немає";break;
		case 6:cout<<"Немає Пар.\nУра!Ура!Ура!";break;
		case 7:cout<<"Немає Пар.\nУра!Ура!Ура!";break;
		default:cout<<"ERROR";
	}


	getch();
	return 0;
 } 
