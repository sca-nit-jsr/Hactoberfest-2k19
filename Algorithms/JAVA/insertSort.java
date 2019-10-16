public class insertSort {
		
		public void insertionSort(int arr[]) {  
	        int arrLen = arr.length;  
	        for (int counter = 1; counter < arrLen; counter++) {  
	            int secondCounter = arr[counter];  
	            
	            int i = counter-1;  
	            while ( (i > -1) && ( arr [i] > secondCounter ) ) {  
	                arr [i+1] = arr [i];  
	                i--;  
	            }  
	            arr[i+1] = secondCounter;  
	        }
	        
	        for(int i:arr){    
	            System.out.print(i + " ");    
	        } 
		}
	}
