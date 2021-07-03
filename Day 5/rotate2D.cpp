//rotate a 2D matrix k times
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>> grid, int k)
{
    vector<vector<int>> mat=grid;
    while(k--)
    {
        int m=grid.size(),n=grid[0].size();
        k=k%(m*n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j+1<n)
                    mat[i][j+1]=grid[i][j];
                if(i+1<m)
                    mat[i+1][0]=grid[i][n-1];
            }
        }
        mat[0][0]=grid[m-1][n-1];
        grid=mat;
    }
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}


int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int k;
    cin>>k;
    rotate(mat,k);
    return 0;
}