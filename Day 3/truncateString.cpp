//truncate strings
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

string truncate(string s, int k) {
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            c++;
        if(c==k)
            s.erase(s.begin()+i,s.end());
    }
    return s;
}

int main()
{
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    string ans=truncate(str,k);
    cout<<ans;
    return 0;
}