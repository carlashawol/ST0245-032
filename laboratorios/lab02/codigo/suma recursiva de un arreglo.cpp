#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <ctime> 
using namespace std;
int datosArreglo(int arr[], int n)
{
	if(n==0)
	{
		return arr[n];
	}
	else
	{
		n--;
		return arr[n+1] + datosArreglo(arr,n);
	}
}
int main()
{
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
	cout<<"La suma de los elementos del arreglo es: "<<datosArreglo(arr, a-1)<<endl;
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
    getch(); 
}
