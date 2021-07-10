//add strings
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    int i=num1.length()-1,j=num2.length()-1;
    int carry=0;
    string res="";
    while(i>=0 || j>=0 || carry){
        long sum=0;
        if(i>=0){
            sum+=num1[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=num2[j]-'0';
            j--;
        }
        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        res+=to_string(sum);
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<addStrings(a,b)<<endl;
    return 0;
}