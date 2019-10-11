package otros.algoritmos;

public class TreeSort {
	
	class nodo {
		int k;
		nodo left, right;
		
		public nodo(int item) {
			k = item;
			left = right = null;
		}
	}
	
	nodo root;
	TreeSort(){
		root = null;
	}
	
	void insert(int k) {
		root = insertRec(root, k);
	}
	
	nodo insertRec(nodo root, int k) {
		if (root == null) {
			root = new nodo(k);
			return root;
		}
		if (k < root.k) {
			root.left = insertRec(root.left, k);
		} else if (k > root.k) {
			root.right = insertRec(root.right, k);
		}
		return root;
	}
	
	void inorderRec(nodo root) {
		if (root != null) {
			inorderRec(root.left);
			System.out.print(root.k + " ");
			inorderRec(root.right);
		}
	}
	
	void treeins(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			insert(arr[i]);
		}
	}

	public static void main(String[] args) {
		TreeSort s = new TreeSort();
		int arr[] = {-45, 34, 0, 14, -44, -98, 56};
		s.treeins(arr);
		s.inorderRec(s.root);

	}

}
