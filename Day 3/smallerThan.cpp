//numbers smaller than 
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> smallerThan(vector<int> v)
{
    vector<int> temp=v;
    sort(v.begin(),v.end());
    unordered_map<int,int> m;
    for(int i=v.size()-1;i>=0;i--)
        m[v[i]]=i;
    for(int i=0;i<v.size();i++)
        temp[i]=m[temp[i]];
    return temp;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> ans=smallerThan(v);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}