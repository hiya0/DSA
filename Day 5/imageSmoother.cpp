//find avg of surrounding numbers 
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int getNeighbours(vector<vector<int>>& img, int i, int j)
{
    int sum=img[i][j];
    int c=1;
    if(j-1>=0)
    {
        sum+=img[i][j-1]; c++;
    }
    if(j+1<img[0].size())
    {
        sum+=img[i][j+1]; c++;
    }
    if(i-1>=0 && j-1 >=0)
    {
        sum+=img[i-1][j-1]; c++;
    }
    if(i-1 >=0)
    {
        sum+=img[i-1][j]; c++;
    }
    if(i-1>=0 && j+1<img[0].size())
    {
        sum+=img[i-1][j+1]; c++;
    }
    if(i+1<img.size()&& j-1 >=0)
    {
        sum+=img[i+1][j-1]; c++;
    }
    if(i+1<img.size())
    {
        sum+=img[i+1][j]; c++;
    }
    if(i+1<img.size() && j+1<img[0].size())
    {
        sum+=img[i+1][j+1]; c++;
    }
    return floor(sum/c);
}

vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    if(img.size()==1 && img[0].size()==1)
        return img;
    int r=img.size(),c=img[0].size();
    vector<vector<int>> res(r,vector<int>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            res[i][j]=getNeighbours(img,i,j);
    }
    return res;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    }
    vector<vector<int>> res=imageSmoother(v);
    for(auto i:res){
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}