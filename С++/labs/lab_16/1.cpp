#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
  int s[50],z[40],b[40],i=0,h1,h2,h,k=0,k1=0;
  ifstream file1("1.1.txt");
  while (!file1.eof()){
    file1>>s[i];
    i++;
  }
  h1=i;
  file1.close();
  
  i=0;
  ifstream file2("1.2.txt");
  while (!file2.eof()){
    file2>>z[i];
    i++;
  }
  h2=i;
  file2.close();
  h=h1+h2;
  
  for(i =0;i<h;i=i+2){
    if(k<h1){
    
      b[i]=s[k];
      k++;
    } 
    if (k1<h2){
    
      b[i+1]=z[k1];
      k1++;
    }
  }
  
  for(i =0;i<h;i++){
    cout<<b[i]<<"  ";
  }
  
  ofstream file3("1.3.txt");
  for(i=0;i<h;i++)
  {
    file3<<b[i]<<" ";
  }
  file3.close();
			
	getch();
    return 0;
  
}
