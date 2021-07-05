//floodfill
#include<iostream>
#include<vector>
using namespace std;

bool isValid(int i, int j, vector<vector<int>> &image,int org)
    {
        return i>=0 && j>=0 && i<image.size() && j<image[0].size() && org==image[i][j];
    }
    
    void dfs(vector<vector<int>> &image,int sr, int sc,int org,int val)
    {
        if(isValid(sr,sc,image,org))
        {
            image[sr][sc]=val;
            dfs(image,sr+1,sc,org,val);
            dfs(image,sr-1,sc,org,val);
            dfs(image,sr,sc+1,org,val);
            dfs(image,sr,sc-1,org,val);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor)
            dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }

int main(){
    int m,n;
    cin>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int sr,sc;
    cin>>sr>>sc;
    int newColor;
    cin>>newColor;
    vector<vector<int>> ans=floodFill(mat,sr,sc,newColor);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}