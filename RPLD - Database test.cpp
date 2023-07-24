#include<bits/stdc++.h>

using namespace std;

int main() {
    
    freopen("input.txt","r",stdin);
    map<int,int> mp;
    
    int n,m,t,i=1;
    cin>>t;
    while(t--)
    {
        int F=1;
        cin>>n>>m;
        while(m--)
        {
            int id,code;
            
            cin>>id>>code;
            if(mp[id]==0 || mp[id]!=code)
            {
                mp[id]=code;
            }
            else if(mp[id]==code)
            {
                F=0;
                cout<<"Scenario #"<<i<<": impossible\n";
                break;
            }
        }
        
        if(F==1)
            cout<<"Scenario #"<<i<<": possible\n";
        
        mp.clear();
        i++;
    }
    
    return 0;
}