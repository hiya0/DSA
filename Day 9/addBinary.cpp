//add two binary numbers
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addBinary(string a, string b) {
    int la=a.length(),lb=b.length();
    string ans="";
    int i=la-1,j=lb-1;
    int sum=0,carry=0;
    while(i>=0 || j>=0)
    {
        if(i<0) 
            sum=b[j--]-'0'+carry;
        else if(j<0) 
            sum=a[i--]-'0'+carry;
        else
            sum=a[i--]-'0'+b[j--]-'0'+carry;
        
        if(sum==0){
            ans+='0';
            carry=0;
        }
        else if(sum==1){
            ans+='1';
            carry=0;
        }
        else if(sum==2){
            ans+='0';
            carry=1;
        }
        else if(sum==3){
            ans+='1';
            carry=1;
        }
    }
    if(carry==1)
        ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
    return 0;
}