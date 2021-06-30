//reshuffle array
//a1a2x1x2a3x3
#include<iostream>
using namespace std;

void reshuffle(int arr[], int n)
{
    int i=2,j=n/2;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;j++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reshuffle(arr,n);
    return 0;
}