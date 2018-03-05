
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime> 
using namespace std;

void swap(int *x,int *y) 
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void insertion_sort(int arreglo[], int n)
{
  int i,j;
  for (i=1; i<n; i++) {
    j=i;
    while ((j>0) and (arreglo[j] < arreglo[j-1])) {
      swap(&arreglo[j],&arreglo[j-1]);
      j = j-1;
    }
  }
}

void print_array(int vect[], int longitud) 
{
  int i;
  cout<<"Imprimiendo array de:"<<longitud<<endl;
  for(i = 0; i < longitud ; i++) {
    cout<<"Elemento Nro."<<i<<"="<<vect[i]<<endl;
  }
}

int main() 
{
	unsigned t0, t1;
	t0=clock();
    int a;
	srand(time(NULL));
	a= (int)((rand()/32767.1)*100000);
	cout<<"La cantidad de elementos del arreglo es: "<<a<<endl;	
	int arr[a];
	srand(time(NULL));
	for(int i=0; i< a ; i++)
	{
		arr[i]= (int)((rand()/32767.1)*1000);
		
	}
   
  
  print_array(arr,a);
  insertion_sort(arr,a);
  print_array(arr,a);
  t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
  return 0;
}
