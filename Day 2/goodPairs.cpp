//find the number of good pairs
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int goodPairs(vector<int> v)
{
    unordered_map<int,int> m;
    int count=0;
    for(auto i:v)
    {
        if(m[i])
            count++;
        else
            m[i]++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int c=goodPairs(v);
    cout<<c<<endl;
    return 0;
}