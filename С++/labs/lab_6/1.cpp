#include <iostream> 
#include <conio.h>

using namespace std;

int main ()
{
	int i;
	float k;
	setlocale(LC_CTYPE, "ukr");
	cout <<"k = ";
	cin >>k;
	i=1;
	cout<<"������� ����������� ������ �� ����� ������ "<<k<<endl;
	while(i<=10)
	{
		cout <<i<<" �����"<<" x "<<k<<"= "<<i*k<<endl;
		i++;
	 } 
	
	
	
	
	getch();
	return 0;
 } 
