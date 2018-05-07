#include <iostream>

#include "conio.h"

#include "stdlib.h"

#define localizar  (nodo *) malloc (sizeof (nodo))

#define nodo_cola (cola  *) malloc (sizeof (cola))

#define MAXIMOV 30 

using namespace std;




struct Vertice {

	int n;

	nodo  *cabeza;

};


struct nodo {

	int ad;

	nodo *sig;

};

struct cola {

	int n;

	cola *cabeza;

};

typedef struct nodo nodo;

typedef struct Vertice Vertice;

typedef struct cola cola;

void insertar_lista (Vertice g[],int v, int ad) {

	nodo *p,*q,*nuevo;


	nuevo = localizar;

	nuevo->ad = ad;

	nuevo->sig = NULL;

	q = NULL;

	p = g[v].cabeza;

	while (p != NULL) {

		q = p;

		p = p->sig;

	}

	if (q == NULL)

		g[v].cabeza = nuevo;

	else q->sig = nuevo;

}

int leer_grafo (Vertice grafo[],Vertice grafo_inver[], int *num_v)

{

	int v,ad,i,n,lea();

	void insertar_lista (Vertice g[],int v, int ad);


	*num_v = n = lea();

	for (i=1; i <= n; i++) {

		grafo[i].n = grafo_inver [i].n = 0;

		grafo[i].cabeza = grafo_inver [i].cabeza = NULL;

	}


	n = lea();

	grafo[n].n = n;

	while (n != 99) {


		cout<<n;

		ad = lea();

		while (ad != 99) {

			insertar_lista (grafo,n,ad);

			insertar_lista (grafo_inver,ad,v);


			cout<<n;
			ad = lea();

		}


		n = lea();

		grafo[n].n = n;

	}

	return (n);

}

void escribir_grafo (Vertice g[],int num_v) {

	nodo *w;

	int i;


	for (i=1; i<=num_v;i++) {

		w = g[i].cabeza;

		cout<<i;

		while (w != NULL) {

			cout<<w->ad;

			w = w->sig;

		}

	}

}

int lea() {

	char Lw[10];


	cin>>Lw;

	return (atoi (Lw));

}





void uno_cola (cola **p)

{

	*p = nodo_cola;

	(*p)->cabeza = *p;

}


void dos_cola (cola **p,int objeto)

{

	cola *nuevo;


	nuevo = nodo_cola;

	nuevo->n = objeto;

	nuevo->cabeza = (*p)->cabeza;

	(*p)->cabeza = nuevo;

	*p = nuevo;

}



int cola_vacia (cola **p)

{

	return (*p == (*p)->cabeza);

}


void tres_cola (cola **p,int *s)

{

	cola *q,*r;


	if (*p == (*p)->cabeza) {


		*s = '#';

	}

	else {

		  q = (*p)->cabeza;

		  r = q->cabeza;

		  *s = r->n;

		  q->cabeza = r->cabeza;

		  if (q == q->cabeza)

				*p = q;

		  free (r);

		  }

}
//Prototipos Funciones
	void uno_cola (cola **p);

	void dos_cola (cola **p,int objeto);

	void tres_cola (cola **p,int *s);

	int cola_vacia (cola **p);

	void escribir_grafo (Vertice g[],int nv);

	int leer_grafo (Vertice grafo[],Vertice g_invertido[], int *nv);
	
int main()

{



	int num_v,n,auxiliar;

    Vertice grafo[MAXIMOV], grafo_inver[MAXIMOV];

	cola *cola;

	struct nodo *w;

	int tope [MAXIMOV],i;


	leer_grafo (grafo,grafo_inver,&num_v);
	escribir_grafo (grafo,num_v);
	escribir_grafo (grafo_inver,num_v);


	for (int i=1; i<=num_v; i++){
		tope [i] = 0;
	}

		

	for (int i=1; i <= num_v; i++ ) {

		w = grafo_inver [i].cabeza;

		while (w != NULL) {

			tope [i]++;

			w= w->sig;

		}

	}

	uno_cola (&cola);

	for (i=1;i<=num_v;i++)

		if (tope [i] == 0 )

			dos_cola (&cola,i);

	while (!cola_vacia(&cola)) {

		tres_cola (&cola ,&n);

		cout<<n;

		w = grafo[n].cabeza;

		while (w != NULL) {

			auxiliar = w->ad;

			tope [auxiliar]--;

			if (tope[auxiliar] == 0)

				dos_cola (&cola,auxiliar);

			w = w->sig;

		}

	}


	getch();

}

