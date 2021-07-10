//reverse vowels
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isVowel(char ch)
{
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
}
    
string reverseVowels(string s) {
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if(isVowel(s[i]) && isVowel(s[j]))
        {
            swap(s[i],s[j]);
            i++;j--;
        }
        else 
        {
            if(!isVowel(s[i]))
                i++;
            if(!isVowel(s[j]))
                j--;
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<reverseVowels(s)<<endl;
    return 0;
}