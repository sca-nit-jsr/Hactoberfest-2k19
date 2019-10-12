#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elemens "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Enter the value to search"<<endl;
    int num;
    cin>>num;
    int f=0;
    for(int i=0;i<10;i++)
    {
        int beg=0,last=9,mid;
        mid=(int)(beg+last)/2;
        if(num==arr[mid])
        {
            f=mid+1;
            cout<<"number is found at position "<<f<<endl;
            break;
        }
        else if(num<arr[mid])
        {
            last=mid-1;
        }
        else
        {
            beg=mid+1;
        }


    }
    if(f==0)
    {
        cout<<"element is not found"<<endl;
    }
    return 0;
}
