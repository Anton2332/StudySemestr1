#include <iostream>
#include <conio.h>

#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

void Input(int size, double mass[]){
	srand(time(NULL));
  for(int i = 0; i< size; i++){
    mass[i] = ( rand() % 101 - 50 ) / 10.0;
    cout << mass[i] << " ";
  }
  cout << endl;  
}

void SumMin(int size, double mass[]){
  float sum_min=0;
  for(int i = 0; i<size; i++){
    if(mass[i]<0){
      sum_min =sum_min+  fabs(mass[i]);
    }
  }
  cout << "Summa min : " << (-1)*sum_min;
  cout << endl;
}

void SumKv(int size, double mass[], int a, int b){
  int sum_kv;
  for(int i = a-1; i<b; i++){
    sum_kv += pow(mass[i],2);
  }
  cout <<"Summa kvadrativ : " <<sum_kv;
  cout << endl;
  for (int i = 0; i<size; i++){
    mass[i] = mass[i] / sum_kv;
    cout << mass[i] << " ";
  }
  cout << endl;
}


int main(){
  int size;
  cout << "Input size: ";
  cin >> size;
  double mass[size];
  Input(size, mass);
  SumMin(size, mass);
  int a, b;
  cout << "Input [a, b]";
  cin >> a >> b;
  SumKv(size, mass, a, b);
  getch();
  return 0;
}
