//A simple program implementing the Double Linked List and giving different operations in the linked list.
//Made by:- Shreyans Jain

import java.util.*;

class DoubleLinkedList{
	Node head;
	Node tail;
	class Node{
		int data;
		Node prev;
		Node next;
		public Node(int data){
			this.data=data;
		}
	}
	void printList(){
		System.out.println("Forward display:\t");
		Node n=head;
		while(n!=null){
			System.out.print(n.data+"\t");
			n=n.next;
		}
		System.out.println("\nBackward display:\t");
		n=tail;
		while(n!=null){
			System.out.print(n.data+"\t");
			n=n.prev;
		}
		System.out.println();
	}
	int getSize(){
		Node n=head;
		int count=0;
		while(n!=null){
			count++;
			n=n.next;
		}
		return count;
	}
	void addNodeAtFront(int newData){
		Node newNode=new Node(newData);

		if(head==null){
			head=newNode;
			tail=newNode;
		}
		else{
			newNode.next=head;
			head.prev=newNode;
			head=newNode;
		}	
	}
	void addNodeAtTail(int newData){
		Node newNode=new Node(newData);
		if(head==null){
			head=newNode;
			tail=newNode;
		}
		else{
			tail.next=newNode;
			newNode.prev=tail;
			tail=newNode;
		}
	}
	void addNodeAtAnyPosition(int newData,int newPosition){
		Node newNode= new Node(newData);
		if(newPosition<0||newPosition>getSize())
			System.out.println("Insertion at this position not possible");
		else{
			Node n=head;
			while(--newPosition>1){
				n=n.next;
			}
			newNode.next=n.next;
			n.next.prev=newNode;

			n.next=newNode;
			newNode.prev=n;
		}
	}
	void deleteNodeAtHead(){
		if(head.next==null){
			head=null;
			tail=null;
		}
		else{
			head=head.next;
			head.prev=null;
		}
	}
	void deleteNodeAtTail(){
		if(head.next==null){
			head=null;
			tail=null;
		}
		else{
			tail=tail.prev;
			tail.next=null;
		}
	}
	void deleteNodeAtAnyPosition(int oldPosition){
		if(oldPosition<0||oldPosition>getSize())
			System.out.println("Deletion at this position not possible");
		else{
			Node n=head;
			while(--oldPosition>1){
				n=n.next;
			}
			n.next=n.next.next;
			n.next.prev=n;
		}
	}
	boolean searchElementInList(int checkElement){
		Node n=head;
		while(n!=null){
			if(n.data==checkElement) return true;
			n=n.next;
		}
		return false;
	}
	boolean ifEmpty(DoubleLinkedList l){
		if(l.head==null)
			return true;
		return false;
	}
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		
		DoubleLinkedList list=new DoubleLinkedList();
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
			list.addNodeAtTail(element);
		}
		list.printList();

		System.out.println("Enter element to be inserted at front");
		element=in.nextInt();
		list.addNodeAtFront(element);
		list.printList();

		System.out.println("Enter element to be inserted at end");
		element=in.nextInt();
		list.addNodeAtTail(element);
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
	}
}