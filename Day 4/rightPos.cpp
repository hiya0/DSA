//find number of elements which are not in place after sorting the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count(vector<int> v)
{
    vector<int> sorted=v;
    sort(sorted.begin(),sorted.end());
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=sorted[i])
            c++;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=count(v);
    cout<<s<<endl;
    return 0;
}