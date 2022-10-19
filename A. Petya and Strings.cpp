#include<bits/stdc++.h>

using namespace std;

string Delete_Vowels(string s)
{
    s.erase(remove(s.begin(),s.end(), 'a'), s.end() );
    s.erase(remove(s.begin(),s.end(), 'A'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'e'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'E'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'i'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'I'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'o'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'O'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'u'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'U'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'y'),s.end() );
    s.erase(remove(s.begin(),s.end(), 'Y'),s.end() );
    
    return s;
    
}

string Consonent_dot(string s)
{
    string temp;
    
    for(int i=0;i<s.size();i++)
    {
        temp+='.';
        temp+=s[i];
    }
    
    return temp;
}

string Replace(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])==true)
            s[i]=tolower(s[i]);
    }
    
    return s;
}
int main() {
    
    string str;
    getline(cin,str);
    
    str=Delete_Vowels(str);
    
    str=Consonent_dot(str);
    
    str=Replace(str);
    cout<<str;
    return 0;
}