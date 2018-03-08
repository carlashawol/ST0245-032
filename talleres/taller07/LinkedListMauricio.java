
import java.lang.IndexOutOfBoundsException; // Usar esto cuando se salga el índice
// Una lista simplemente enlazada

public class LinkedListMauricio {
	public Node first;
	private int size;

	public LinkedListMauricio() {
		size = 0;
		first = null;
	}

	/**
	 * Returns the node at the specified position in this list.
	 * 
	 * @param index
	 *            - index of the node to return
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
	 * 
	 * @param index
	 *            - index of the element to return
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
	public int size() {
		return this.size;
	}

	// Inserta un dato en la posición index
	public void insert(int data, int index) {
		Node nuevo = new Node(data);
		if (index == 0) {
			nuevo.next = first;
			first = nuevo;
		} else {
			Node temp = this.getNode(index - 1);
			nuevo.next = temp.next;
			temp.next = nuevo;
		}
		size++;
	}

	// Borra el dato en la posición index
	public void remove(int index) {
		if (index == 0)
			first = this.getNode(index + 1);
		else {
			Node temp = this.getNode(index - 1);
			temp.next = this.getNode(index).next;
		}
		size--;
	}

	// Verifica si está un dato en la lista
	public boolean contains(int data) {
		Node actual = first;
		while (actual != null) {
			if (actual.data == data)
				return true;
			actual = actual.next;
		}
		return false;
	}

	// Retorna el maximo valor de la lista
	public int maxValue() {
		return maxValueAux(this.first);
	}
	
	private int maxValueAux(Node n) {
		if (n.next == null)
			return n.data;
		else
			return Math.max(n.data, maxValueAux(n.next));
	}
	
	// Verifica si dos listas son iguales
	public boolean iguales(LinkedListMauricio list) {
		if (this.size() != list.size() || this.size() == 0)
			return false;
		else
			return igualesAux(this.first, list.first);
	}
	
	private boolean igualesAux(Node n, Node n1) {
		if (n.next == null)
			return n.data == n1.data;
		else 
			return n.data == n1.data && igualesAux(n.next, n1.next);
	}
}