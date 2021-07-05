//reverse and flip the matrix bits
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> image) {
    for(int i=0;i<image.size();i++)
        reverse(image[i].begin(), image[i].end());
    for(int i=0;i<image.size();i++){
        for(int j=0;j<image.size();j++)
            image[i][j]^=1;
    }
    return image;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    vector<vector<int>> ans=flipAndInvertImage(mat);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}