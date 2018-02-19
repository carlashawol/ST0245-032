#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int a;
	cout<<"Digite un numero: ";
	cin>>a;
	cout<<"El factorial de su numero es: "<<factorial(a)<<endl;
	system("pause");
	return 0;
	
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		n= n*factorial(n-1);
	}
	return n;
	
}
