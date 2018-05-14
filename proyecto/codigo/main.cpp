#include "miniwin.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<time.h>

using namespace miniwin;
int main(){
 
	long h[100000];
	long angulo[100000];
	long hip, anp;
	srand(time(NULL));
    int num1, num2;
	vredimensiona(600,600); 
	color(ROJO);
	int n=-1;
	for(int i=0; i<100000; i++){
		num1=1+rand()%(101-1);
		num2=1+rand()%(101-1);
		hip=sqrt((num1*num1*10*10)+(num2*num2*10*10));
		anp= atan(num2/num1); 
		punto(num1*10,num2*10);
		n=n+1;
		for(int j=0; j<n;j++){
			if((h[j]==hip)&&(angulo[j]==anp))
			{
					texto(0,0, "Las abejas colisionaron. ");
					refresca();
			}
		}
		h[n]=hip;
		angulo[n]=anp;
		refresca();
		espera(30);
	}

	return 0;
}
