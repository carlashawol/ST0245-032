/**
 * Constructor de Nodos del arbol
 * 
 * @Sebastian Arboleda Botero
 * @Carla Daniela Rendon
 * @mayo 2018
 */
import java.util.*;

  class Nodo {
      //constructor de los Nodos del quadtree
     List<Abeja> lista = new ArrayList<Abeja>();
  public Nodo(Abeja abeja){
      lista.add(abeja);
      }
  public int dato;
  public Nodo izqInf;
  public Nodo izqSup;
  public Nodo derInf;
  public Nodo derSup;
 }


