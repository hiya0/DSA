//find intersection of two arrays
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

vector<bool> highest(vector<int> v, int extra)
{
    vector<bool> ans;
    auto m=max_element(v.begin(),v.end());
    int max=*m;
    for(auto i: v){
        if(i< abs(max-extra))
            ans.push_back(false);
        else
            ans.push_back(true);
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
    int extraValue;
    cin>>extraValue;
    vector<bool> res;
    res=highest(v,extraValue);
    for(auto i: res)
        cout<<i<<" ";
    return 0;
}