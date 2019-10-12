#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int num;
    cout<<"Enter the number to search"<<endl;
    cin>>num;
    int flag=-1;
    for(int i=0;i<10;i++)
    {
        if(num==arr[i])
        {
            cout<<"number is found at position : "<<++i;
            flag++;
        }

    }
    if(flag==-1)
    {
        cout<<"number is not found in array"<<endl;
    }
    return 0;
}
