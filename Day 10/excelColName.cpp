//excel column name
#include<iostream>
#include<string>
using namespace std;

string convertToTitle(int columnNumber) {
    char ch;
    string ans="";
    while(columnNumber)
    {
        ch='A'+(columnNumber-1)%26;
        ans=ch+ans;
        columnNumber=(columnNumber-1)/26;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<convertToTitle(num)<<endl;
    return 0;
}