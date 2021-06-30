//reshuffle array
//a1x1a2x2a3x3
#include<iostream>
using namespace std;

void reshuffle(int arr[], int n)
{
    int i=0,j=n/2;
    int ans[n];
    for(int k=0;k<n;k++)
    {
        if(k%2==0)
            ans[k]=arr[i++];
        else
            ans[k]=arr[j++];
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
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