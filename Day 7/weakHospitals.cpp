//find k weakest hospitals
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> weakHospitals(vector<vector<int>> mat,int k)
{
    vector<pair<int,int>> v;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++)
        {
            if(mat[i][j]==0){
                v.push_back({j,i});
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    vector<int> ans;
    for(int i=0;i<k;i++)
        ans.push_back(v[i].second);
    return ans;

}

int main()
{
    int n,m;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int k;
    cin>>k;
    vector<int> ans=weakHospitals(mat,k);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;    
}