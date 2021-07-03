//find the sum of the values in the range of i,j where i,j are given as a pair
#include<iostream>
#include<vector>
using namespace std;

int pairSum(vector<int> v, int left, int right)
{
    int s=0;
    for(int i=0;i<v.size();i++){
        s+=v[i];
        v[i]=s;
    }
    if(left==0)
        return v[right];
    return v[right] - v[left-1];
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int left,right;
    cin>>left>>right;
    int sum=pairSum(v,left,right);
    cout<<sum<<endl;
    return 0;
}