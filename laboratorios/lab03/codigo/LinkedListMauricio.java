import java.lang.IndexOutOfBoundsException; // Usar esto cuando se salga el índice
// Una lista simplemente enlazada
public class LinkedListMauricio {
 private Node first;
 private int size;
  public LinkedListMauricio()
 {
	size = 0;
	first = null;	
  }

	/**
	 * Returns the node at the specified position in this list.
	 * @param index - index of the node to return
	 * @return the node at the specified position in this list
	 * @throws IndexOutOfBoundsException
	 */
	private Node getNode(int index) throws IndexOutOfBoundsException {
		if (index >= 0 && index < size) {
			Node temp = first;
			for (int i = 0; i < index; i++) {
				temp = temp.next;
			}
			return temp;
		} else {
			throw new IndexOutOfBoundsException();
		}
	}

	/**
	 * Returns the element at the specified position in this list.
	 * @param index - index of the element to return
	 * @return the element at the specified position in this list
	 */
	public int get(int index) {
		Node temp = null;
		try {
			temp = getNode(index);
		} catch (IndexOutOfBoundsException e) {
			e.printStackTrace();
			System.exit(0);
		}

		return temp.data;
	}

// Retorna el tamaño actual de la lista
public int size()
{
	return this.size;
}

// Inserta un dato en la posición index
public void insert(int data, int index)
{
     if (size == 0)
     {
         Node nodoNuevo = new Node(data);
         nodoNuevo.next = first;
         first = nodoNuevo;
     }
     else {
         Node temp = first;
	 for (int i = 0; i < index-1; i++) {
	     temp = temp.next;
	   }
	 Node nodonuevo = new Node(data);
	 nodonuevo.next = temp.next;
	 temp.next = nodonuevo;
        }
     
	size++;
}

// Borra el dato en la posición index
public void remove(int index)
{
    Node ant = temp;
    int i = 1;
    while (sum < index - 1){
        ant = ant.next;
        i++;
    }
    Node current = ant.next;
    ant.next = current;
    current.next = null;
    size--;
    
}

 //Verifica si está un dato en la lista
public boolean contains(int data,Node compar) throws IndexOutOfBoundsException{
    for (int i=0;i<size;i++){
        if(data == compar){
            return true;
        }else{ return false;
        }
    }   
    
  }
}

