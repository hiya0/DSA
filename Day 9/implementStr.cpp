//find position of needle in haystack
#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle) {
    if(needle.length()==0)
        return 0;
    for(int i=0;i<haystack.length();i++)
    {
        int j;
        for(j=0;j<needle.length();j++)
        {
            if(i+j==haystack.length())
                return -1;
            if(haystack[i+j]!=needle[j])
                break;
        }
        if(j==needle.length())
            return i;
    }
    return -1;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<strStr(a,b)<<endl;
    return 0;
}