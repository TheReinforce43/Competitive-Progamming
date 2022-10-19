#include<bits/stdc++.h>
using namespace std;

 bool is_vowel(char s)
 {
     if(s=='a'  || s=='e' || s=='i' || s=='o' || s=='u' || s=='y')
        return true;
 }
 
 int main() {
     
     string str, ans;
     
     cin>>str;
     
     for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
    }
    
    for(int i=0;i<str.size();i++)
    {
        if(!is_vowel(str[i]))
        {
            ans+='.';
            ans+=str[i];
        }
    }
    cout<<ans;
     return 0;
 }