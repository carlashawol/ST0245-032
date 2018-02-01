#include<iostream>

using namespace std;

class Taller2
{
	private:
		int target;
		int start;
		int suma;
		string A;
	public:
		Taller2(int,int,int, string);
		int num[20];
		int x,y,z;
		void calcularsubconjunto();
};
Taller2::Taller2(int _target, int _start, int _suma, string _A)
{
	target=_target;
	start=_start;
	suma=_suma;
	A=_A;
}
void Taller2::calcularsubconjunto()
{
	cout<<"Ingrese la cantidad de elementos de su conjunto: ";
	cin>>start;
	for(int i=1;i<=start;i++)
	{
		cout<<"Ingrese el elemento Nro. "<<i<<" de su conjunto: ";
		cin>>num[i];
	}
	cout<<"Ingrese el target: ";
	cin>>target;
	A="FALSO";
	for(int i=1;i<=start;i++)
	{
		suma=suma+num[i];
		if(suma==target)
		{
			A="VERDADERO";
		}
	}
	for(int j=1;j<=start;j++)
	{
		x=num[j];
		for(int i=j+1; i<=target;i++){
			
			y=num[i];
			if((x+y)==target)
			{
				A="VERDADERO";
			}
			
		}
			
	}
	for(int i=1; i<=start;i++)
	{
		z=num[i];
		if(z==target)
		{
		    A="VERDADERO";
		}		
	}
	cout<<"La respuesta es: "<<A<<endl;
}
int main()
{
	Taller2 Conj(0,0,0,"a");
	Conj.calcularsubconjunto();
	system("pause");
	return 0;
	
}



