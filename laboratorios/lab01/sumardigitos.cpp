#include<iostream>
using namespace std;
int sumardigitos(int);
int main()
{
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	cout<<"La suma de los digitos de su numero es: "<<sumardigitos(num)<<endl;
	system("pause"); 
	return 0;
	
}
int sumardigitos(int n){
	if(n<10)
	{
		return n;
	}
	else
	{
		return sumardigitos(n/10) + sumardigitos(n%10);
	}
	
}
