#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void transposeRev(vector<vector<int>>& mat, vector<vector<int>>& target)
{
    for(int i=0;i<mat.size();i++){
        for(int j=i;j<mat.size();j++)
            swap(mat[i][j],mat[j][i]);
    }
    for(int i=0;i<mat.size();i++)
        reverse(mat[i].begin(),mat[i].end());
}   

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    if(mat==target)
        return true;
    int k=3;
    while(k--)
    {
        transposeRev(mat,target);
        if(mat==target)
            return true;
    }
    return false;    
}

int main()
{
    int n,m;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    vector<vector<int>> target(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>target[i][j];
    }
    cout<<findRotation(mat,target)<<endl;
    return 0;    
}