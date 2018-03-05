#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime> 

using namespace std;



int main(){
	unsigned t0, t1;
	t0=clock();
	int a, sum;
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
	sum=0;
	for(int i=0; i<=a-1; i++)
	{  
		sum=sum+arr[i];
	}
	cout<<"La suma es: "<<sum<<endl;
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    double resul= time*1000;
    cout << "Execution Time: " << resul << endl;


    



}

