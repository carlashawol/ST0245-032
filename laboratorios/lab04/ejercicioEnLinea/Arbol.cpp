#include<iostream>
#include<stdlib.h>
using namespace std;
  

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	
};
//Prototipos de las funciones
Nodo *crearNodo(int);// la funcion crear tiene un apuntador
void insertarNodo(Nodo *&, int);
void menu();
void postOrden(Nodo *);
Nodo *arbol=NULL;//OBLIGATORIO.

int main(){
	menu();
	
	
	
	return 0;
}
// Funcion de menu

void menu(){
	int dato, opcion, contador=0;
	
	do{
		
		cout<<"\nMENU. "<<endl;
		cout<<"1. INSERTAR UN NUEVO NODO."<<endl;
		cout<<"2. Recorrer el arbol en postOrden."<<endl;
		cout<<"3. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
	     switch(opcion){
	     	case 1: cout<<"Digite el numero que desee insertar en el arbol: ";
	     	        cin>>dato;
	     	        insertarNodo(arbol, dato);
	     	        cout<<"\n";
	     	        system("pause");
	     	        break;
	     	case 2: cout<<"Mostrando el arbol en postOrden."<<endl;
	     	        postOrden(arbol);
	     	        cout<<"\n";
	     		    system("pause");
	     	        break;
		 }
		 system("cls");
	}while(opcion != 3);
	
	
}


//funcion para crear un nuevo nodo.
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
	
}
//funcion para insertar un nuevo nodo.
void insertarNodo(Nodo *&arbol , int n){
	//tenemos que tener en cuenta dos cosas: que el arbol este vacio y qu el arbol ya tenga un nodo.
	if(arbol==NULL){
		Nodo *nuevo_nodo= crearNodo(n);
		arbol= nuevo_nodo;
	}else{
		int ValorRaiz =arbol->dato;//obtenemos el valor de la raiz
		if(n<ValorRaiz){//insertamos el nodo a la izquierda ya que el elemento es menor
		   insertarNodo(arbol->izq, n);
		}else{//insertamos el nodo a la derecha ya que el elemento es mayor
			insertarNodo(arbol->der, n);
		}
	}
	
}

void postOrden( Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<"-";
	}
}
