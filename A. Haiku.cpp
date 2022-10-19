#include<bits/stdc++.h>
using namespace std;

bool Check_vowel(char ch)
{
    if(ch=='a' ||  ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    else 
        return false;
}
int main() {
    
    vector<string>v(3);
    
    for(int i=0;i<v.size();i++)
    {
        char ch;
        cin>>ch;
        getline(cin,v[i]);
        
        v[i]=ch+v[i];
    }
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
            v[i][j]=tolower(v[i][j]);
    }
    
    vector<int>count(3,0);
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            char ch=v[i][j];
            if(Check_vowel(ch)==true)
                count[i]++;
        }
    }
    if(count[0]==5 && count[1]==7 && count[2]==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}