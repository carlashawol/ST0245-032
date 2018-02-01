#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	string a;
	int b;
	cout<<"Introduzca un conjunto de letras: ";
	cin>>a;
	b=pow(2, a.length());
	cout<<"La cantidad de combinaciones posibles es de: "<<b<<" combinaciones."<<endl;
	system("pause");
	
}


