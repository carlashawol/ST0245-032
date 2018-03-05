#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime>
using namespace std;
int fibonacchi(int);//constructor
int main(){
	unsigned t0, t1;
	t0=clock(); 
	int a;
	srand(time(NULL));
	a= (int)((rand()/32767.1)*1000);
	cout<<"Valor aleatorio: "<<a<<endl;
	cout<<"El fibonacchi del valor aleatorio es: "<<fibonacchi(a)<<endl;
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
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



