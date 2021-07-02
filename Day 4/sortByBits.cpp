//sort according to number of 1 bits
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countSetBits(int n)
{
    int c=0;
    while(n)
    {
        c+=(n&1);
        n>>=1;
    }
    return c;
}
    
vector<int> sortByBits(vector<int>& arr) {
    vector<int> ans;
    vector<pair<int,int>> numOne;
    for(int i=0;i<arr.size();i++)
    {
        int count=countSetBits(arr[i]);
        numOne.push_back({count,arr[i]});
    }
    sort(numOne.begin(),numOne.end());
    for(auto i:numOne)
        ans.push_back(i.second);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> ans=sortByBits(v);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}