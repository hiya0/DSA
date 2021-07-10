//valid anagram
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if(s.length()!=t.length())
        return false;
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    for(int i=0;i<t.length();i++)
    {
        m[t[i]]--;
        if(m[t[i]]==-1)
            return false;
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}