//add two large integer values
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                char t=st.top();
                st.pop();
                if((s[i]==')' && t=='(') || (s[i]=='}' && t=='{') || (s[i]==']' && t=='['))
                    continue;
                return false;
            }
        }
        if(!st.empty())
            return false;
        return true;
    }

int main()
{
    string s;
    cin>>s;
    if(isValid(s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}