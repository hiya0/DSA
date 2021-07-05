//find the area of shadow
#include<iostream>
#include<vector>
using namespace std;

int projectionArea(vector<vector<int>> grid) {
    int top=0,front=0,side=0;
    for(int i=0;i<grid.size();i++){
        int rmax=0,cmax=0;
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]!=0)
                top++;
            if(grid[i][j]>rmax)
                rmax=grid[i][j];  
            if(grid[j][i]>cmax)
                cmax=grid[j][i];
        }
        side+=rmax;
        front+=cmax;
    }
    return top+front+side;
}

int main(){
    int m,n;
    cin>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int ans=projectionArea(mat);
    cout<<ans<<endl;
    return 0;
}