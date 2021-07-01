//decode the encoded array to get the original array
#include<iostream>
#include<vector>

using namespace std;
vector<int> decode(vector<int> v, int first) {
    vector<int> ans;
    ans.push_back(first);
    for(int i=0;i<v.size();i++)
        ans.push_back(ans[i]^v[i]);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int first;
    cin>>first;
    vector<int> ans=decode(v,first);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}