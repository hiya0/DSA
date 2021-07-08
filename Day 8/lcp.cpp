//longest common prefix
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string checkPrefix(string lcp, string str)
{
    int l=min(lcp.length(),str.length());
    int i;
    for(i=0;i<l;i++)
    {
        if(str[i]!=lcp[i])
            break;
    }
    return lcp.substr(0,i);
}
    
string longestCommonPrefix(vector<string> strs) {
    if(strs.size()==0)    return "";
    string lcp=strs[0];
    for(int i=1;i<strs.size();i++)
        lcp=checkPrefix(lcp,strs[i]);
    return lcp;
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n,"");
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<longestCommonPrefix(v)<<endl;
    return 0;
}