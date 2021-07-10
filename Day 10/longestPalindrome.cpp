//longest palindrome possible
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int longestPalindrome(string s) {
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    int ans=0;
    bool flag=false;
    for(int i=0;i<m.size();i++){
        if(m[i]%2==0)
            ans+=m[i];
        else{
            flag=true;
            ans+=m[i]-1;
        }
    }
    if(flag)
        ans++;
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s)<<endl;
    return 0;
}