#include<iostream>
#include<string.h>
using namespace std;
string groupsum(int start, int A[], int target)
{
	if((A[start]%5)>0)
	{ 
		return groupsum(start-1,A,target) ;
	}
	if(start<0)
	{ 
		return "Falso";
	}
	if((target<0)and ((A[start]%5)==0) and (A[start-1]!=1))
	{
		return groupsum(start,A,target+A[start+1]) ;
		
	}
	if((A[start]==target) and (target>0) and (A[start-1]!=1))
	{
		return "Verdadero";
	}
	else 
	{
		if(((A[start]%5)==0) and (A[start-1]!=1))
     	{
	    	return groupsum(start-1,A,target-A[start]) ;
	    } 
	    else
		{
	    	if(((A[start]%5)==0) and (A[start-1]==1))
			{
	    		return groupsum(start-2,A,target) ;
			}
	    	
		}
	}
	
}

int main(){
	int h[20];
	int objetivo, j;
	string resultado;
	cout<<"Ingrese la cantidad de elementos de su arreglo: ";
	cin>>j;
	for(int i=1;i<=j;i++)
	{
		 cout<<"Ingrese el elemento Nro."<<i<<" de su arreglo: ";
         cin>>h[i];
	}
    cout<<"Ingrese el target(que sea multiplo de 5): ";
    cin>>objetivo;
    resultado= groupsum(j,h,objetivo);
	cout<<resultado;
	
}

