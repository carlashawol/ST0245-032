#include<iostream>
using namespace std;
int triangulo(int);
int main()
{
	int f;
	cout<<"Ingrese el numero de filas: ";
	cin>>f;
	cout<<"El numero de bloques es: "<<triangulo(f);
	
	return 0;
}
int triangulo(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return 	n+triangulo(n-1);
	}
	 
}
