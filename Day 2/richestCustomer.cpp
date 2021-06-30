//find richest customer
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int richestCust(vector<vector<int>> amt)
{
    int max=INT_MIN, cust=-1;
    for(int i=0;i<amt.size();i++){
        int s=0;
        for(int j=0;j<amt[0].size();j++)
            s+=amt[i][j];
        max=max>s ? max:s;
        cust=i+1;
    }
    return cust;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> amt(m, vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>amt[i][j];
        }
    }
    cout<<richestCust(amt)<<endl;
    return 0;
}