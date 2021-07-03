//reshape a matrix
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> mat, int r, int c) {
    int m=mat.size(),n=mat[0].size();
    if(m*n != r*c)
        return mat;
    vector<vector<int>> ans (r,vector<int>(c,0));
    int x=0,y=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            ans[x][y]=mat[i][j];
            y++;
            if(c==y){
                x=x+1;
                y=0;
            }
        }
    }
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int r,c;
    cin>>r>>c;
    vector<vector<int>> ans=matrixReshape(mat,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}