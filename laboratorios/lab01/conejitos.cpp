#include<iostream>
using namespace std;
int conejitos(int);
int main()
{
	int cant;
	cout<<"Ingrese la cantidad de conejitos: ";
	cin>>cant;
	cout<<"el numero de orejas es: "<<conejitos(cant)<<endl;
	
	
}
int conejitos(int n){
	
	if(n==1)
	{
		
		return 2;
	}
	else
	{
		n=2+conejitos(n-1);
	}
	return n;
}
