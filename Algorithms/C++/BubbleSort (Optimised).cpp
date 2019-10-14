/*Author: Abhishek Sarwan //worstguyalive
  Github: abhisheksarwan
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++) {cin>>arr[i];}

    bool noSwap;

    for(int i=size; i>0; i--)
    {
        noSwap = true;
        for(int j=0; j<i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                noSwap = false;
            }
        }
        if(noSwap) { break; }
    }
    for(int i=0;i<size;i++) {cout<<arr[i]<<" ";}
}
