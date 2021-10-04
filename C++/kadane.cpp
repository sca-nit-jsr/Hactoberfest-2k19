//Kadane’s algorithm is used to find out the maximum subarray sum from an array of integers.

#include<iostream>
using namespace std;
int kadanes(int array[],int length) {
   int highestMax = 0;
   int currentElementMax = 0;
   for(int i = 0; i < length; i++){
      currentElementMax =max(array[i],currentElementMax + array[i]) ;
      highestMax = max(highestMax,currentElementMax);
   }
   return highestMax;
}
int main() {
   cout << "Enter the array length: ";
   int n;
   cin >> n;
   int arr[n];
   cout << "Enter the elements of array: ";
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   cout << "The Maximum Sum is: "<<kadanes(arr,n) << endl;
   return 0;
}
