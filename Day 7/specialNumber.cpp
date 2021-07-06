//find special number which is minimum in its row and maximum in its column
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int specialNumber(vector<vector<int>> mat) {
    int k;
    vector<int> v;
    for(int i=0;i<mat.size();i++){
        int rmin=INT_MAX, cmax=INT_MIN;
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]<rmin){
                rmin=mat[i][j];
                k=j;
            }
        }
        for(int j=0;j<mat.size();j++)
        {
            if(mat[j][k]>cmax)
                cmax=mat[j][k];
        }
        if(cmax==rmin)
            return cmax;
    }
    return -1;
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int ans=specialNumber(mat);
    cout<<ans<<endl;
    return 0; 
}