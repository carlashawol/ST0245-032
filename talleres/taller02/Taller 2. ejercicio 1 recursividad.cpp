#include<iostream>
using namespace std;

int MCD(int,int);
int main(){
	int p,q;
	cout<<"CALCULO DEL MCD MEDIANTE EL ALGORITMO DE EUCLIDES."<<endl;
	cout<<"Nota: Asegurese de que el primer numero que ingrese sea mayor que el segundo."<<endl;
	cout<<"Primer numero: ";
	cin>>p;
	do{cout<<"Segundo numero: ";
	cin>>q;}while(q>p);
	
	cout<<"EL MCD ES: "<<MCD(p,q)<<endl;
}

int MCD(int p, int q){
	
	if((p%q)==0){
		
		return q; //caso base
		
	}
	else 
	
	return MCD(q,p%q );//caso general
	
}
