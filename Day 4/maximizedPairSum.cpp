//find all pairs sum such that sum of min of pair is maximized
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSum(vector<int> v)
{
    sort(v.begin(),v.end());
    int s=0;
    for(int i=0;i<v.size();i+=2)
        s+=v[i];
    return s;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=maxSum(v);
    cout<<s<<endl;
    return 0;
}