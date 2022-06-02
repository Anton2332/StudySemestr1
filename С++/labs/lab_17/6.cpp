#include<iostream>
 #include<cstdio>
 #include<cstring>
 #include<cstdlib>
 #include <conio.h>
 using namespace std;
 void convert(char str[]);
 int main()
 {
   system("cls");
   char s[75];

   gets(s);
   convert(s);
   cout << s;
   getch();
   return 0;
  }
void convert(char a[])
{
  for(int i=0; a[i]!='\0'; i++){
        if(a[i]==' ')
           {
         a[i]='_';
           }
    }
}
