#include<iostream>
#include<conio.h>
#include<stdlib.h>
 
using namespace std;

typedef struct Nodo{
	int d;
	struct Nodo *siguiente;
}nodo;
typedef nodo *ptrNodo;
typedef nodo *ptrPila;

void push(ptrPila *pila, int x){
	ptrNodo NODO;
	NODO = (ptrNodo)malloc(sizeof(nodo));
	if(NODO != NULL){
		NODO->d = x;
		NODO->siguiente = *pila;
		*pila= NODO;	
	}
}
int pop (ptrPila *pila){
	ptrNodo NODO;
	int x= 0;
	NODO= *pila;
	x= (*pila)->d;
	*pila=(*pila)->siguiente;
	free(NODO);
	return x;
}
int pila_nula(ptrPila *pila){
	return (*pila ==NULL ? 1:0);
}
void invertir(ptrNodo nodo1, ptrNodo nodo2, ptrNodo nodo3){
	
	if(nodo1==NULL){
		cout<<"PILAS VACIAS";
	}
	else{
		while(nodo1 != NULL){
			push(&nodo2, nodo1->d);
			nodo1=nodo1->siguiente;
		}
		while(nodo2 != NULL){
			push(&nodo3, nodo2->d);
			nodo2=nodo2->siguiente;
		}
		while(nodo3 != NULL){
			push(&nodo1, nodo3->d);
			nodo3=nodo3->siguiente;
		}
		while(nodo1 != NULL){
			cout<<nodo1->d<< " ";
			nodo1=nodo1->siguiente;
		}
	}
}
int main(){
 ptrPila p1=NULL, p2 =NULL, p3=NULL;
 push(&p1,1);
 push(&p1,2);
 push(&p1,3);
 if (!pila_nula(&p1)){
 	invertir(p1,p2,p3);
 }	
}
