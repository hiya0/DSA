//longest common suffix
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string checkSuffix(string lcsuff, string str)
{
    int l=min(lcsuff.length(),str.length());
    int i;
    for(i=0;i<l;i++)
    {
        if(str[i]!=lcsuff[i])
            break;
    }
    return lcsuff.substr(0,i);
}
    
string longestCommonSuffix(vector<string> strs) {
    if(strs.size()==0)    
        return "";
    string lcsuff=strs[0];
    for(int i=1;i<strs.size();i++)
        lcsuff=checkSuffix(lcsuff,strs[i]);
    return lcsuff;
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n,"");
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        reverse(v[i].begin(),v[i].end());
    string ans=longestCommonSuffix(v);
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}