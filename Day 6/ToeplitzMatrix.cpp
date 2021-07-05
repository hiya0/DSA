//check if forward diagonal elements are same
#include<iostream>
#include<vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>> matrix)
{
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++)
        {
            if(i+1<matrix.size() && j+1<matrix[0].size())
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                    return false;
            }
        }
    }
    return true;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    if(isToeplitzMatrix(mat))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}