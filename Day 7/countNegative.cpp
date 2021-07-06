//count negative numbers in a 2D matrix sorted in non-increasing order
#include<iostream>
#include<vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int count=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]<0){
                count+=grid[0].size()-j;
                break;
            }
        }
    }
    return count;
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int ans=countNegatives(mat);
    cout<<ans<<endl;
    return 0; 
}