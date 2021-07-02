//find the number of distinct encoding 
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int distinctEncoding(vector<string> words)
{
    vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(string word: words)
        {
            string s="";
            for(char ch:word)
                s.append(v[ch-'a']);
            st.insert(s);
        }
        return st.size();
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n," ");
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=distinctEncoding(v);
    cout<<s<<endl;
    return 0;
}