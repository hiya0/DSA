//create target array
#include<iostream>
#include<vector>

using namespace std;

vector<int> targetArr(vector<int> ind, vector<int> val)
{
    vector<int> target;
    for(int i=0;i<ind.size();i++)
        target.insert(target.begin()+ind[i],val[i]);
    return target;
}

int main()
{
    int n;
    cin>>n;
    vector<int> val(n,0),ind(n,0);
    for(int i=0;i<n;i++)
        cin>>ind[i];
    for(int i=0;i<n;i++)
        cin>>val[i];
    vector<int> ans=targetArr(ind,val);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}