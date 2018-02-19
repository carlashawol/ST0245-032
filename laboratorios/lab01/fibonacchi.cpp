#include<iostream>
using namespace std;
int fibonacchi(int);//constructor
int main(){
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a; 
	cout<<"El fibonacchi de su numero es: "<<fibonacchi(a)<<endl;
	
}
int fibonacchi(int n){
	int numero;
	if(n<=3)
	{
		if(n==1)
		{
			
			return 0;
		}
		if(n==2){
			
			return 1;
		}
		if(n==3){
			
			return 1;
		}
		
	}
	else
	     return fibonacchi(n-1)+fibonacchi(n-2);
	
}



