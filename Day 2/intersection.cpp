//find intersection of two arrays
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void intersection(vector<int> arr1, vector<int> arr2){
    unordered_map<int,int> m;
    unordered_set<int> st;
    for(auto i: arr1)
        m[i]=1;
    for(auto i: arr2)
    {
        if(m[i])
            st.insert(i);
        m[i]=2;
    }
    for(auto i:st)
        cout<<i<<" ";
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> arr1(m,0), arr2(n,0);
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    intersection(arr1,arr2);
    return 0;
}