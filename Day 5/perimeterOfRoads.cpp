//find the perimeter of roads
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>>& grid,int i,int j,int m,int n){
    return i>=0 && j>=0 && i<m && j<n && grid[i][j]==1;
}

int islandPerimeter(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
    int count=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1)
            {
                count+=4-(isValid(grid,i-1,j,m,n)+isValid(grid,i+1,j,m,n)+isValid(grid,i,j+1,m,n)+isValid(grid,i,j-1,m,n));
            }
        }
    }
    return count;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int peri=islandPerimeter(mat);
    cout<<peri<<endl;
    return 0;
}