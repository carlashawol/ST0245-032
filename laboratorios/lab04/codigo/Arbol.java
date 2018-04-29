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
  private boolean buscar(Nodo nodo, String n){
      
      if (nodo.dato == n){
          return true;
        }
      if (n != nodo.dato)
          return buscar(nodo.derecha, n);
          return buscar(nodo.izquierda, n);
        
    }
  public boolean buscar(String n){
    return buscar(raiz,n);
  }
  private void insertar(Nodo nodo, String p, String n){
      int cont = 0;
       if (nodo == null && p == null){
           nodo = new Nodo(n);
        }
      if (nodo.dato == n){
          return;
        }
      if (nodo.dato == p )
          if (nodo.izquierda == null)
           nodo.izquierda = new Nodo (n);
         else 
          if (nodo.derecha == null)
            nodo.derecha = new Nodo(n);
            else
             insertar(nodo.derecha,p,n);
    }
  public void insertar(String n, String p) {
      if (raiz == null)
      raiz = new Nodo(n);
      else
      insertar (raiz,p,n);
    }
 }
