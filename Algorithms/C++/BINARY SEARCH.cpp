#include <iostream> 
using namespace std; 
  
/* A iterative binary search function. It returns 
   location of x in given array arr[l..r] if present, 
   otherwise -1 */
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        
        if (arr[m] == x) //Checking if the element is equal to mid
            return m; 
 
        if (arr[m] < x) 
            l = m + 1; //If x is greater than mid, ignore left part of mid.
 
        else
            r = m - 1; //If x is smaller than mid,ignore right part of mid. 
    } 
    
    return -1; //If this function returns -1, then the element is not present in array.
} 
  
int main()
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    
    if(result==-1)
      cout << "Element is not present in array";
    
    else
      cout << "Element is present at index " << result; 
    
    return 0; 
} 
