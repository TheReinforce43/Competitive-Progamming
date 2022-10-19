#include<bits/stdc++.h>

using namespace std;

int main() {
    
    map<string,string> mp;
    
    int n,m;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[b]=a;
    }
    
    while(m--)
    {
        
        string ip,name;
        cin>>name>>ip;
        ip.pop_back();
        
        cout<<name<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    

    return 0;
}