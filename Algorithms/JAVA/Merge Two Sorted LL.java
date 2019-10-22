/*Merge Two Sorted LL

Given two linked lists sorted in increasing order. Merge them in such a way that the result list is also sorted (in increasing order).
Try solving with O(1) auxiliary space (in-place). You just need to return the head of new linked list, don't print the elements.
Input format :
Line 1 : Linked list 1 elements of length n (separated by space and terminated by -1)
Line 2 : Linked list 2 elements of length m (separated by space and terminated by -1)
Output format :
Merged list elements (separated by space)
Constraints :
1 <= n, m <= 10^4
Sample Input :
 2 5 8 12 -1
 3 6 9 -1
Sample Output :
 2 3 5 6 8 9 12
*/

/*************** 
 * Following is the Node class already written 
class LinkedListNode<T> {
	T data;
	LinkedListNode<T> next;

	public Node(T data) {
		this.data = data;
	}
}
 ***************/

public class Solution {

	public static LinkedListNode<Integer> mergeTwoList(LinkedListNode<Integer> head1, LinkedListNode<Integer> head2) {
		
      if(head1==null){
        return head2;
      }
      if(head2==null){
        return head1;
      }
      LinkedListNode<Integer>head=null,tail=null;
      LinkedListNode<Integer> temp1=head1;
      LinkedListNode<Integer> temp2=head2;
      
      
      if(temp1.data.compareTo(temp2.data)<0){
        head=temp1;
        tail=temp1;
        temp1=temp1.next;
        
      }
      else{
        head=temp2;
        tail=temp2;
        temp2=temp2.next;
        
      }
      
      while(temp1 !=null&& temp2 !=null){
      
        
        if(temp1.data.compareTo(temp2.data)<0){
        tail.next=temp1;
        tail=temp1;
        temp1=temp1.next;
        
      }
      else{
        tail.next=temp2;
        tail=temp2;
        temp2=temp2.next;
        
      }
     
      }
      if(temp1 !=null){
        tail.next=temp1;
        
      }
      else{
        tail.next=temp2;
      
      }
		return head;
	}

} 