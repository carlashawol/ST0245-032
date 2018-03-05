#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime>


using namespace std;

int main()
{
	unsigned t0, t1;
	t0=clock();
	int max=0;
	int largo;
	srand(time(NULL));
	largo= (int)((rand()/32767.1)*1000);
	int arr[largo];
	srand(time(NULL)); 
	for(int i=0; i<largo; i++)
	{ 
		
		arr[i]= (int)((rand()/32767.1)*1000);
		cout<<"Elemento Nro. "<<i+1<<": "<<arr[i]<<endl;
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"El valor maximo: "<<max<<endl;
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
}
 
	

    
