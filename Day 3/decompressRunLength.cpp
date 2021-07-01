//form pair(freq,val) and add val in output freq times
#include<iostream>
#include<vector>

using namespace std;

vector<int> decompress(vector<int> v)
{
    int i=0;
    vector<int> ans;
    while(i<v.size())
    {
        int freq=v[i],val=v[i+1];
        while(freq--)
            ans.push_back(val);
        i+=2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> ans=decompress(v);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}