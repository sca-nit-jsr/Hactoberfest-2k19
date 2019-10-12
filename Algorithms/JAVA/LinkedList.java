//A simple program implementing the Single Linked List and giving different operations in the linked list.
//Made by:- Shreyans Jain

import java.util.*;

class LinkedList{
	Node head;
	Node tail;
	class Node{
		int data;
		Node next;
		public Node(int d){
			data=d;
			next=null;
		} 
	}
	void printList(){
		System.out.print("Linked List :\t");
		Node n=head;
		while(n!=null){
			System.out.print(n.data+"\t");
			n=n.next;
		}
		System.out.println();
	} 
	int getSize(){
		Node n=head;
		int c=0;
		while(n!=null){
			c++;
			n=n.next;
		}
		return c;
	}
	void addNodeAtEnd(int newData){
		Node newNode=new Node(newData);
		
		if(head==null){
			head=newNode;
			tail=newNode;
			return;
		}
		else{
			tail.next=newNode;
			tail=newNode;
		}
	}
	void addNodeAtFront(int newData){
		Node newNode=new Node(newData);

		if(head==null){
			head=newNode;
			tail=newNode;
			return;
		}
		else{
			newNode.next=head;
			head=newNode;
		}
	}
	void addNodeAtAnyPosition(int newData,int newPosition){
		Node newNode=new Node(newData);

		if(newPosition<0||newPosition>getSize()){
			System.out.println("Insertion of size not possible. Size of Linked List is "+getSize());
		}
		else{
			Node n=head;
			while(--newPosition>1){
				n=n.next;
			}
			newNode.next=n.next;
			n.next=newNode;
		}
	}
	void deleteNodeAtHead(){
		if(head.next==null)
			head=null;
		else
			head=head.next;
	}
	void deleteNodeAtTail(){
		if(head.next==null)
			head=null;
		else{
			Node n=head;
			Node temp=n;
			while(n.next!=null){
				temp=n;
				n=n.next;
			}
			temp.next=null;
			tail=temp;
		}
	}
	void deleteNodeAtAnyPosition(int oldPosition){
		if(oldPosition>0&&oldPosition<=getSize()){
			Node n=head;
			while(--oldPosition>1){
				n=n.next;
			}
			n.next=n.next.next;
		}
		else System.out.println("Deletion of size not possible. Size of Linked List is "+getSize());
	}
	boolean searchElementInList(int checkElement){
		Node n=head;
		while(n!=null){
			if(n.data==checkElement) return true;
			n=n.next;
		}
		return false;
	}
	boolean ifEmpty(LinkedList l){
		if(l.head==null)
			return true;
		return false;
	}
	void reverseDisplay(Node head){
		if(head==null)
			return;
		else{
			reverseDisplay(head.next);
			System.out.print(head.data+"\t");
		}
	}
	void reverseList(Node n){
		Node prev=null;
		Node current=n;
		Node next=null;
		while(current!=null){
			next=current.next;
			current.next=prev;
			prev=current;
			current=next;
		}
		head=prev;
	}
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		
		LinkedList list=new LinkedList();
   				if(list.ifEmpty(list))
					System.out.println("Node Empty");
				else
					System.out.println("Node have elements");
		int element;int position;
		System.out.println("Enter the size of nodes");
		int n=in.nextInt();
		
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++){
			element=in.nextInt();
			list.addNodeAtEnd(element);
		}
		list.printList();

		System.out.println("Enter element to be inserted at front");
		element=in.nextInt();
		list.addNodeAtFront(element);
		list.printList();

		System.out.println("Enter element to be inserted at end");
		element=in.nextInt();
		list.addNodeAtEnd(element);
		list.printList();

		System.out.println("Enter element and position where it is to be inserted");
		element=in.nextInt();
		position=in.nextInt();
		list.addNodeAtAnyPosition(element,position);
		list.printList();	

		System.out.println("Deletion of HEAD");
		list.deleteNodeAtHead();
		list.printList();

		System.out.println("Deletion of TAIL");
		list.deleteNodeAtTail();
		list.printList();

		System.out.println("Enter position where element is to be deleted");
		position=in.nextInt();
		list.deleteNodeAtAnyPosition(position);
		list.printList();

		System.out.println("Enter the element to be searched in Linked List");
		element=in.nextInt();
		if(list.searchElementInList(element))
			System.out.println("Search element found ");
		else
			System.out.println("Search element not found");

				if(list.ifEmpty(list))
					System.out.println("Node Empty");
				else
					System.out.println("Node have elements");

		System.out.println("Original list");
		list.printList();

		System.out.println("Reversing list");
		list.reverseList(list.head);
		list.printList();

		System.out.print("Reverse display: \t");
		list.reverseDisplay(list.head);
	}
}