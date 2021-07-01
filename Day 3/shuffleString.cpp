//shuffle string
#include<iostream>
#include<vector>
using namespace std;

void shuffle(vector<int> ind, vector<char> ch)
{
    vector<char> ans(ind.size(),' ');
    for(int i=0;i<ind.size();i++)
        ans[ind[i]]=ch[i];
    for(auto i:ans)
        cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    vector<int> ind(n,0);
    vector<char> ch(n,' ');
    for(int i=0;i<n;i++)
        cin>>ind[i];
    for(int i=0;i<n;i++)
        cin>>ch[i];
    shuffle(ind,ch);
    return 0;
}