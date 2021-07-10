//ransom note from magazine
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    if(ransomNote.length()>magazine.length())
        return false;
    unordered_map<char,int> m;
    for(int i=0;i<magazine.length();i++)
        m[magazine[i]]++;
    for(int i=0;i<ransomNote.length();i++)
    {
        m[ransomNote[i]]--;
        if(m[ransomNote[i]]<0)
            return false;
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(canConstruct(s1,s2))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}