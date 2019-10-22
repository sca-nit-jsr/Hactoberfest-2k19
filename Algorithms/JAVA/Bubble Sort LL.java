/*Bubble Sort

Sort a given linked list using Bubble Sort (iteratively). While sorting, you need to swap the entire nodes, not just the data.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5
*/

public class Solution {



		//Write your code here
      public static LinkedListNode<Integer> bubbleSort(LinkedListNode<Integer> head)
	{
		LinkedListNode<Integer> temp = head;
		while(temp.next != null)
		{
			temp = temp.next;
		}
		return bubbleSort(head,temp);
	}
	
	private static LinkedListNode<Integer> bubbleSort(LinkedListNode<Integer> head, LinkedListNode<Integer> tail) 
	{
		if(head == null || head.next == null)
			return head;
		
		LinkedListNode<Integer> mid = printMiddel(head , tail);
		LinkedListNode<Integer> t = mid.next;
		
		mid.next = null;
		
		LinkedListNode<Integer> ans1 = bubbleSort(head , mid);
		LinkedListNode<Integer> ans2 = bubbleSort(t, tail);
		
		LinkedListNode<Integer> result = mergeTwoList(ans1, ans2);
		
		return result;
		
	}
	
	
	private static LinkedListNode<Integer> printMiddel(LinkedListNode<Integer> head , LinkedListNode<Integer> tail) 
	{
		LinkedListNode<Integer> slow = head;
		LinkedListNode<Integer> fast = head;
		
		while(fast != tail && fast.next != tail)
		{
			slow = slow.next;
			fast = fast.next.next;
		}
		
		return slow;
		
	}
	
	
	private static LinkedListNode<Integer> mergeTwoList(LinkedListNode<Integer> head1, LinkedListNode<Integer> head2) 
	{
		LinkedListNode<Integer> t1 = head1;
		LinkedListNode<Integer> t2 = head2;
		
		LinkedListNode<Integer> head = null;
		LinkedListNode<Integer> tail = null;
		
		while(t1 != null && t2 != null)
		{
			if(t1.data < t2.data)
			{
				if(head == null)
				{
					head = t1;
				}
				
				else
					tail.next = t1;
				
				tail = t1;
				t1 = t1.next;
			}
			
			else
			{
				if(head == null)
				{
					head = t2;
				}
				
				else
					tail.next = t2;
				
				tail = t2;
				t2 = t2.next;
			}
		}
		
		if(t1 != null)
			tail.next = t1;
		
		if(t2 != null)
			tail.next = t2;
		
		return head;
		
	}
	}