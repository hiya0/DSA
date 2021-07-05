//transpose of matrix
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> matrix) {
    vector<vector<int>> transp(matrix[0].size(),vector<int>(matrix.size(),0));
    for(int i=0;i<matrix[0].size();i++)
    {
        for(int j=0;j<matrix.size();j++)
            transp[i][j]=matrix[j][i];
    }
    return transp;
}

int main(){
    int m,n;
    cin>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    vector<vector<int>> ans=transpose(mat);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}