#include<iostream>
using namespace std;
class Fecha
{
	private:
		int dia;
		int mes;
		int anio;
		string Smes;
	public:
		Fecha(int,int,int, string);//constructor
		int dia2;
		int mes2;
		int anio2;
		void pedirfecha();
		void definirmes();
		void imprimirfecha();
		void pedirfecha2();
		void comparar();	
};
Fecha::Fecha(int _dia, int _mes, int _anio, string _Smes)
{
	dia= _dia;
	mes=_mes;
	anio= _anio;
	Smes=_Smes;
}
void Fecha::pedirfecha(){
	cout<<"Digite el dia de su fecha: ";
	cin>>dia;
	cout<<"Digite el mes de su fecha: ";
	cin>>mes;
	cout<<"Digite el anio de su fecha: ";
	cin>>anio;
}

void Fecha::definirmes()
{
	if(mes==1)
	{
		Smes="Enero";	
	}
	if(mes==2)
	{
		Smes="Febrero";	
	}if(mes==3)
	{
		Smes="Marzo";	
	}if(mes==4)
	{
		Smes="Abril";	
	}if(mes==5)
	{
		Smes="Mayo";	
	}if(mes==6)
	{
		Smes="Junio";	
	}if(mes==7)
	{
		Smes="Julio";	
	}
	if(mes==8)
	{
		Smes="Agosto";	
	}if(mes==9)
	{
		Smes="Septiembre";	
	}if(mes==10)
	{
		Smes="Octubre";	
	}if(mes==11)
	{
		Smes="Noviembre";	
	}if(mes==12)
	{
		Smes="Diciembre";	
	}
}
void Fecha::imprimirfecha(){
	cout<<"Su fecha 1 es: "<<dia<<" de "<<Smes<<" de "<<anio<<endl;
	
}
void Fecha::pedirfecha2()
{
	cout<<"Digite el dia de la fecha con la cual desea comparar la anterior: ";
	cin>>dia2;
	cout<<"Digite el mes de la fecha con la cual desea comparar la anterior: ";
	cin>>mes2;
	cout<<"Digite el anio de la fecha con la cual desea comparar la anterior: ";
	cin>>anio2;
	
	cout<<"Su fecha 2 es: "<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;
	
}
void Fecha::comparar()
{
	if(anio>anio2){
		cout<<"La fecha 1 es mayor que la fecha 2."<<endl;
		
	}
	if(anio<anio2){
		cout<<"La fecha 1 es menor que la fecha 2."<<endl;
		
	}
	if(anio==anio2)
	{
		if(mes>mes2)
		{
		cout<<"La fecha 1 es mayor que la fecha 2."<<endl;
     	}
    	if(mes<mes2)
		{
		cout<<"La fecha 1 es menor que la fecha 2."<<endl;
	    }
	    if(mes==mes2)
		{
			if(dia>dia2)
	    	{
	        	cout<<"La fecha 1 es mayor que la fecha 2."<<endl;
         	}
        	if(dia<dia2)
	    	{
	        	cout<<"La fecha 1 es menor que la fecha 2."<<endl;
	        }
	        if(dia==dia2)
			{
	        	cout<<"La fecha 1 es igual que la fecha 2."<<endl;
			}	
		}	
	}
}
int main()
{
	Fecha f1(0,0,0,"A");
	f1.pedirfecha();
	f1.definirmes();
	f1.imprimirfecha();
	f1.pedirfecha2();
	f1.comparar();	
	system("pause");
	return 0;
}
