//remove duplicates in a sorted array
#include<iostream>
using namespace std;

int removeKey(int arr[],int n,int key)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]==key)
        {
            swap(arr[i],arr[j]);
            j--;
        }
        else
            i++;
    }
    return i+1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int k=removeKey(arr,n,key);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    return 0;
}