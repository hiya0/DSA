//find the length of last word
#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) {
    int l=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' ')   
            l++;
        else if(l!=0) 
            return l;
    }
    return l;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}