/*Print reverse LinkedList

Print a given linked list in reverse order. You need to print the tail first and head last. You can’t change any pointer in the linked list, just print it in reverse order.
Input format : Linked List elements (separated by space and terminated by -1)

Output format : Linked List elements in reverse order (separated by space)

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
Sample Input 2 :
1 2 3 -1
Sample Output 2 :
3 2 1
*/


/*
class LinkedListNode<T> {
	public T data;
	public LinkedListNode<T> next;

	public LinkedListNode(T data) {
		this.setData(data);
		this.next = null;
	}

	public T getData() {
		return data;
	}

	public void setData(T data) {
		this.data = data;
	}

}
* */
public class Solution {
	public static void printReverseRecursive(LinkedListNode<Integer> root) {
       if (root == null)
        return;
 
        // print list of head node
        printReverseRecursive(root.next);
 
        // After everything else is printed
        System.out.print(root.data+" ");
    }
}