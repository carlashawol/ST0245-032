#include<iostream>
#include<math.h>
using namespace std;
class Punto2d
{
	private:
		float x1;
		float y1;
		float angulo;
		float radio;
	public:
		Punto2d(float, float, float, float);//constructor
		float x2, y2, distancia;
		void pediry();
		void pedirx();
		void calcularadio();
		void calcularangulo();
		void calculardistancia();	
};
Punto2d::Punto2d(float _x1, float _y1, float _angulo, float _radio)
{
	x1=_x1;
	y1=_y1;
	angulo=_angulo;
	radio=_radio;
}
void Punto2d::pedirx(){
	cout<<"Por favor ingrese la coordenada X del punto de referencia: ";
	cin>>x1;
	
}
void Punto2d::pediry(){
	cout<<"Por favor ingrese la coordenada Y del punto de referencia: ";
	cin>>y1;
	
}
void Punto2d::calcularadio()
{
	radio=sqrt((x1*x1)+(y1*y1));
	cout<<"El radio es: "<<radio<<endl;	
}
void Punto2d::calcularangulo(){
	
	angulo=atan(y1/x1);
	cout<<"El angulo es: "<<angulo<<endl;	
}
void Punto2d::calculardistancia()
{
	cout<<"Calculo de distancia euclidea con respecto a otro punto."<<endl;
	cout<<"Por favor ingrese la coordenada X del punto con respecto al cual se desea calcular la distancia: ";
	cin>>x2;
	cout<<"Por favor ingrese la coordenada Y del punto con respecto al cual se desea calcular la distancia: ";
	cin>>y2;
	
	distancia=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
	cout<<"La distancia euclidea es: "<<distancia<<endl;	
}
int main()
{
	Punto2d p1(0,0,0,0);
	p1.pedirx();
	p1.pediry();
	p1.calcularadio();
	p1.calcularangulo();
	p1.calculardistancia();
	system("pause");
	return 0;
}



