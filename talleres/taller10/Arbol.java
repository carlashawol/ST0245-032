
/**
 * Write a description of class arbol here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
class Arbol {
  private Nodo raiz;
     private void imprimir(Nodo nodo){
        if (nodo != null){
           imprimir(nodo.izquierda);
           System.out.println(nodo.dato);
           imprimir(nodo.derecha);
        }
     }
     public void imprimir(){
       imprimir(raiz);
      }
  private boolean buscar(Nodo nodo, int n){
      
      if (nodo.dato == n){
          return true;
        }
      if (n > nodo.dato)
          return buscar(nodo.derecha, n);
          return buscar(nodo.izquierda, n);
        
    }
  public boolean buscar(int n){
    return buscar(raiz,n);
  }
  private void insertar(Nodo nodo, int n){
       if (nodo == null){
           nodo = new Nodo(n);
        }
      if (nodo.dato == n){
          return;
        }
      if (n > nodo.dato )
          if (nodo.derecha == null)
           nodo.derecha = new Nodo (n);
         else
         insertar(nodo.derecha, n);
         else 
          if (nodo.izquierda == null)
            nodo.izquierda = new Nodo(n);
            else
             insertar(nodo.izquierda,n);
    }
  public void insertar(int n) {
      if (raiz == null)
      raiz = new Nodo(n);
      else
      insertar (raiz,n);
    }
 }

