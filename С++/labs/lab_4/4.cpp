#include <iostream> 
#include <conio.h>
#include <locale>


using namespace std;

int main ()
{
	int z=0,z1=1939,z2=1991,z3=13,z4=1991,z5=1945,v1,v2,v3,v4,v5;
	setlocale(LC_ALL, "Ukrainian");
	cout << "В якому роц1 почалась друга Св1това в1йна?"<<"\n"<<"В1дпов1дь:";
    cin>>v1;
    cout << "В якому роц1 почалось презеденство Леон1да Кравчука?"<<"\n"<<"В1дпов1дь:";
    cin>>v2;
    cout << "Кор1нь 1з 169 ?"<<"\n"<<"В1дпов1дь:";
    cin>>v3;
    cout << "Коли україна здобула незалежн1сть?"<<"\n"<<"В1дпов1дь:";
    cin>>v4;
    cout << "Коли зак1нчилась друга св1това в1йна?"<<"\n"<<"В1дпов1дь:";
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
    
    cout<<"Бал = "<<z;
    

	getch();
	return 0;
 } 
