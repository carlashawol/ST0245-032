#include<iostream>
#include<stdlib.h>

using namespace std;

int sumaconjuntos(int,string,int);//constructor
int main(){
	int start, b,a, w;
	string entrada;
	cout<<"Digite la cantidad de elementos de su conjunto:";
	cin>>a;
	for(int i=1;i<=a;i++){
		cout<<"Ingrese el elemento Nro. "<<i<<" de su conjunto: ";
		cin>>entrada;
	}
	cout<<"Ingrese el target: ";
	cin>>b;
	cout<<sumaconjuntos(0,entrada,b);
	
}

int sumaconjuntos(int start, string nums, int target){
  int x=atoi(nums.c_str());
	if (start>nums.length())
	{
		
		return target==0; //caso base
		
	}
	else 
	 return sumaconjuntos(start+1, nums, target-x) or sumaconjuntos(start+1, nums, target);
	

	
}
