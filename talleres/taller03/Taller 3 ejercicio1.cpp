#include<iostream>
using namespace std;
void juegodiscos(int,int,int,int);//constructor
int main(){
	int n=0, p1=1,p2=2,p3=3; 
	string s;
	do
	{
		cout<<"JUEGO DE LAS TORRES DE HANOI."<<endl;
    	cout<<"Con cuantos discos desea jugar?: ";
    	cin>>n;
    	juegodiscos(n,p1,p2,p3);
    	cout<<"Desea seguir jugando?: ";
    	cin>>s;
    	cout<<endl;
	}while(s=="si");
    	
	system("pause");
	return 0;
}
void juegodiscos(int numdisco,int poste1,int poste2,int poste3)
{
	if(numdisco == 1){
		cout<<"  Mover el disco "<<numdisco<<" del poste "<<poste1<<" al poste "<<poste3<<"."<<endl;
	}
	else{
	   juegodiscos(numdisco-1,poste1, poste3, poste2);
	   cout<<"  Mover el disco "<<numdisco<<" del poste "<<poste1<<" al poste "<<poste3<<"."<<endl;
	   juegodiscos(numdisco-1,poste2, poste1, poste3);
	}
}
