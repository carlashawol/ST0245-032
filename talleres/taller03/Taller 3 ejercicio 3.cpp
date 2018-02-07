#include <iostream> 
#include<string.h>
#include<stdlib.h>
using namespace std;
  
void Permutacion(char *, int l=0); //constructor

int main() 
{
   char p1[] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
   cout<<"CALCULO DE PERMUTACION PARA UN CONJUNTO DE LETRAS."<<endl;
   cout<<"Ingrese el conjunto de letras: ";
   cin>>p1;

   Permutacion(p1);
   
   cin.get();
   return 0;
}

void Permutacion(char * cadena, int b) {
   char c;    //para intercambio
   int a = strlen(cadena);

   for(int i = 0; i < a-b; i++) 
   {
      if(a-b > 2) 
	  {
	     Permutacion(cadena, b+1);
	  }
      else 
	  cout << cadena << "   ";
      c = cadena[b];
      cadena[b] = cadena[b+i+1];
      cadena[b+i+1] = c;
      if(b+i == a-1)
	   {
         for(int j = b; j < a; j++) 
            cadena[j] = cadena[j+1];
            cadena[a] = 0;
      }
   }
}
