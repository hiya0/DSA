//find sum of xor of all subsets
#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> v, int i, int s)
{
    if(i==v.size())
        return s;
    return sum(v,i+1,s^v[i]) + sum(v,i+1,s);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=sum(v,0,0);
    cout<<s<<endl;
    return 0;
}