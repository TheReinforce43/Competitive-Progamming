#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<string> v;
    
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        string str;
        char ch;
        cin>>ch;
        getline(cin,str);
        str=ch+str;
        v.push_back(str);
    }
    
    sort(v.begin(),v.end());
    int size=unique(v.begin(),v.end()) -v.begin();
    cout<<size;
    return 0;
}