#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime>

using namespace std;

int ArregloMaxRecursivo(int arr[], int n, int max){
	
	if((n==0)and(arr[n]>max)){
		return arr[n];
	}
	else
	{
		if (n==0){
			return max;
		}
		else
		{
			if(arr[n]>max){
				max=arr[n];
			}
			
		  return ArregloMaxRecursivo(arr, n-1, max);
		}
	}
	
}
int main(){
	
	unsigned t0, t1;
	t0=clock();
	int a;
	srand(time(NULL));
	a= (int)((rand()/32767.1)*1000);
	cout<<"La cantidad de elementos del arreglo es: "<<a<<endl;	
	int arr[a];
	srand(time(NULL));
	for(int i=0; i< a ; i++)
	{
		arr[i]= (int)((rand()/32767.1)*1000);
		cout<<"Elemento del arreglo "<<i<<": "<<arr[i]<<endl;
	}
	cout<<"el mayor de los elementos es: "<<ArregloMaxRecursivo(arr, a-1, arr[0])<<endl;
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
}
