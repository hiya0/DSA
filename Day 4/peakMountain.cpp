//find peak in mountain i.e. arr[i-1]<arr[i]<arr[i+1]
#include<iostream>
#include<vector>
using namespace std;

int peakMountain(vector<int> v) {
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
            return i-1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=peakMountain(v);
    cout<<s<<endl;
    return 0;
}