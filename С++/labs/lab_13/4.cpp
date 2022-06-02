#include <iostream>
#include <conio.h>
#include <stdio.h>      
#include <stdlib.h>    
#include <time.h>
#include <math.h>
#define N 50
using namespace std;

int three_avr(int array[N], int index){
 return (array[index] + array[index+1] + array[index+2]) / 3;
}

int generic_array(int array[N], int n, int array_b[N]){
 int k=0;
 
 for(int i = 0; i < n-3; i += 3){
  array_b[k] = three_avr(array, i);
  k++;
 }

 return k;
}

int main(){
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    
 int array_a[N], array_b[N], n, k;
  
    cout << "Введите длину массива > "; cin >> n;
  
    cout << "\nМассив:\n";
    for(int i = 0; i < n*3; i++){
     array_a[i] = rand() % 15;
  
  cout << array_a[i] << " ";
    }

 cout << "\nНовый массив:\n\t";
 k = generic_array(array_a, n*3, array_b);
 for(int i = 0; i < k; i++)
  cout << array_b[i] << " ";
}
