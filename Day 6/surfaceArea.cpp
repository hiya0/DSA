//find surface area of cubes at ij
#include<iostream>
#include<vector>
using namespace std;

int surfaceArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                    ans+=6*grid[i][j]-(2*(grid[i][j]-1));
                    if(i<n-1)
                        ans-=2*min(grid[i][j],grid[i+1][j]);
                    if(j<n-1)
                        ans-=2*min(grid[i][j],grid[i][j+1]);
                }
            }
        }
        return ans;
    }

int main(){
    int m,n;
    cin>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int ans=surfaceArea(mat);
    cout<<ans<<endl;
    return 0;
}