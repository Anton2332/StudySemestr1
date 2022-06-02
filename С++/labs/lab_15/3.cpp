#include <conio.h>
#include <iostream>
#include <string.h>


using namespace std;

int main(){
   char s[50];
   int n, Ch[50],k=0;
  
   cout<<endl<<" S0 = "<<endl;
   gets(s);
   n= strlen(s);
  
  
  for(int i=0;i<n;i++){
    if(isdigit(s[i])){
      
      Ch[k]=int(s[i])-48;
      k++;
      
    }
    
  }
  cout<<endl;
  for(int i=0;i<k;i++){
    cout<<Ch[i]<<" ";
      
  }

}
