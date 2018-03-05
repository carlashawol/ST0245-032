#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime>
using namespace std;

 
void merge(int arr[], int l, int m, int r)
{
    int x, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
 
    for (x = 0; x < n1; x++)
        L[x] = arr[l + x];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
	x = 0; 
    j = 0; 
    k = l; 
    while ((x < n1) and (j < n2))
    {
        if (L[x] <= R[j]) 
        {
            arr[k] = L[x];
            x++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (x < n1)
    {
        arr[k] = L[x];
        x++;
        k++;
    }
 
    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
       
        int m = l+(r-l)/2;
 
        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
 

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<endl;
    
}
 

int main()
{
	unsigned t0, t1;
	t0=clock();
    
    
    int arraySize;
	srand(time(NULL));
	arraySize= (int)((rand()/32767.1)*1000);
	int arr[arraySize];
	srand(time(NULL));
	for(int i=0; i<arraySize ; i++)
	{
		arr[i]= (int)((rand()/32767.1)*1000);
	}
    
 
    cout<<"Given array is: "<<endl;
    printArray(arr, arraySize);
 
    mergeSort(arr, 0, arraySize - 1);
 
    cout<<"\nSorted array is: "<<endl;
    printArray(arr, arraySize);
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    double resul= time*1000;
    cout << "Execution Time: " << resul << endl;
    return 0;
}

