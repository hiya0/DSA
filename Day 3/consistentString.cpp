//find number of consistent strings
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

int consistentString(string s, vector<string> words) 
{
    unordered_map<char,int> m;
    for(auto i:s)
        m[i]++;
    int c=0;
    for(auto word:words)
    {
        int flag=0;
        for(char c:word)
        {
            if(m[c])
                continue;
            flag=1;
        }
        if(flag==0)
            c++;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    vector<string> words(n," ");
    for(int i=0;i<n;i++)
        cin>>words[i];
    string s;
    cin>>s;
    int c=consistentString(s,words);
    cout<<c;
    return 0;
}