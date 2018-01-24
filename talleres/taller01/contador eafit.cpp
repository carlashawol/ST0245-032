#include<iostream>
using namespace std;
class Contador
{
	private:
		string nombre;
		float valor;
	public:
		Contador(string, float);//constructor
		void incrementar();
		void decrementar();		
};
Contador::Contador(string _nombre, float _valor)//definicion del constructor
{
    nombre= _nombre;
    valor= _valor;
}
void Contador::incrementar()
{
	cout<<"el nombre del contador es: "<<nombre<<endl;
	valor=valor+1;
	cout<<valor<<endl;
}
void Contador::decrementar()
{
	valor=valor-1;
}
int main()
{
	Contador C1("Id",0);
	C1.incrementar();
	C1.incrementar();
	
	system("pause");
	return 0;

}
