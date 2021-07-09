//add two large integer values
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addIntegers(string a, string b)
{
    int la=a.length(),lb=b.length();
    int i=la-1,j=lb-1;
    int sum=0,carry=0;
    string ans="";
    while(i>=0 || j>=0)
    {
        if(i<0)
            sum=b[j--]-'0'+carry;
        else if(j<0)
            sum=a[i--]-'0'+carry;
        else    
            sum=a[i--]-'0'+b[j--]-'0'+carry;
        ans+=(sum%10)+'0';
        carry=sum/10;
    }
    if(carry!=0)
        ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<addIntegers(a,b)<<endl;
    return 0;
}