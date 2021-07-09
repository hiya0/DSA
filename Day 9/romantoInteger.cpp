//roman to integer
#include<iostream>
#include<string>
using namespace std;

int RtoI(char ch)
{
    switch(ch){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }    
    return 0;
}
    
int romanToInt(string s) {
    int num=0;
    for(int i=0;i<s.length();i++)
    {
        if(RtoI(s[i])<RtoI(s[i+1]))
            num-=RtoI(s[i]);
        else
            num+=RtoI(s[i]);
    }
    return num;
}

int main()
{
    string s;
    cin>>s;
    cout<<romanToInt(s)<<endl;
    return 0;
}