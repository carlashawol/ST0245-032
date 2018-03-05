void MergeSort(int inicio,int fin,int *lista){
    /*
    Si la sub-lista es de tamaño 1 o 0, se termina el método, 
    dado que esta sub-lista ya está ordenada.
    */
    if(fin - inicio == 0 || fin - inicio == 1)
        return;
    
    //determinamos el punto medio del intervalo a ordenar.
    int cursor= (inicio + fin)/2;

    //Ordenamos la sub-lista de la izquierda.
    MergeSort(inicio,cursor,lista);

    //Ordenamos la sub-lista de la derecha.
    MergeSort(cursor,fin,lista);

    int puntero1 = inicio,
        puntero2 = cursor,
        puntero3 = 0;

    /*
    Creamos un arreglo donde guardaremos la mezcla 
    de las sub-listas ordenadas.
    */
    int array[fin-inicio];
    
    //Mezclamos las sub-lista de derecha y de izquierda, en el arreglo array.
    while(puntero1<cursor || puntero2<fin){
        if(puntero1<cursor && puntero2<fin){
            if(lista[puntero1]<lista[puntero2]){
                array[puntero3++] = lista[puntero1++];
            }else{
                array[puntero3++] = lista[puntero2++];
            }
        }else if(puntero1<cursor){
            array[puntero3++] = lista[puntero1++];
        }else{
            array[puntero3++] = lista[puntero2++];
        }
    }

    /*
    Para terminar pasamos la sub-lista ordenada 
    que está en el arreglo array para la lista original.
    */
    for(int i=0;i<fin-inicio;i++){
        lista[inicio+i]=array[i];
    }
}
