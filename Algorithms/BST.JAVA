#insertion, deletion, inorder traversal of the String in Binary Search Tree

import java.util.Scanner;
public class BST {
	Node root;
	static class Node
	{
		int age;
		String name;
		Node left;
		Node right;
		Node(int age,String name)
		{
			left =null;
			right=null;
			this.name=name;
			this.age=age;
	 
		}
	}
	 
	public static int compare(String n1,String n2) {
	   n1=n1.toLowerCase().replaceAll("\\s+", "");
	   n2=n2.toLowerCase().replaceAll("\\s+", "");
	   int flag=0;
		
		for(int i=0;i<n2.length();i++) 
		{
			int a=(int)n1.charAt(i);	//comparing with the ASCII Value
			int b=(int)n2.charAt(i);
			
			if(a>b) 
			{
				flag=1;
				break;	
			}
			else if(b>a)
			{
				flag=2;
				break;
			}
			else 
			{
				continue;
			}
				
		}
		return flag;	
	}	
	    public static Node min(Node root)
	    {
	    	Node root2=null;
	    	root=root.right;
	    	 while(root.left!=null)
	    	 {
	    		 root=root.left;
	    	 }
	    	 root2=root;
	    	 if(root.right!=null)
	    	 {
	    		 root=root.right;
	    	 }
	    	 else
	    	 {
	    		 root=null;
	    	 }
	    	 
	    	 return root2;
	     }
	
	  public void insert(int age,String name )
	  { 
		  root = insertRec(root,age,name); 
	  } 
	   public Node insertRec(Node root, int age,String name)
	    { 
	    	if (root == null)
	    	{ 
	            root = new Node(age,name); 
	            return root; 
	        } 
	  
	        if (compare(root.name,name)==1) 
	        {
	            root.left = insertRec(root.left,age,name); 
	        }
	        else if (compare(root.name,name)==2) 
	        {
	            root.right = insertRec(root.right,age,name); 
	        }

	        return root; 
	    } 
	    public void inorder() 
	    { 
	        inorderRec(root); 
	     } 
	   
	     
	    public static  void inorderRec(Node root) { 
	         if (root != null) 
	         { 
	             inorderRec(root.left); 
	             System.out.println(root.name+" "+root.age); 
	             inorderRec(root.right); 
	         } 
	     }
  public static void main(String[] args) {
	    	
	    	Scanner sc = new Scanner(System.in);
	    	BST tree = new BST();
	    	System.out.println("Enter the Choice");
	    	int flag=1;
	    	while(flag==1)
	    	{
	    		System.out.println("Enter 1 to insert");
	    		System.out.println("Enter 2 to print");
	    		
	    		int choice = sc.nextInt();
	    		switch(choice)
	    		{
	    			case 1:
	    			{
	    				System.out.println("Enter the numbr of entries you want to enter ");
	    				int n = sc.nextInt();
	    				for(int i=0;i<n;i++)
	    				{
	    					System.out.println("Enter age of person "+ (i+1));
	    					int age = sc.nextInt();
	    					System.out.println("Enter name of person "+(i+1));
	    					String name = sc.next();
	    					tree.insert(age, name);
	    				}
	    				break;
	    			}
	    			case 2:
	    			{
	    				System.out.println("The entries in tree in the inorder form: ");
	    				tree.inorder();
	    				break;
	    			}
	    		
	    		}
	    		System.out.println("Do you want to continue if yes press 1 otherwise 0");
	    		flag = sc.nextInt();
	    		
	    	}
	       
	    }
}
