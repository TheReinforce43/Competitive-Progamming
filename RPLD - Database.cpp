#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    
    optimize();
    
    
    int t;
    
    cin>>t;
    
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        map<pair<int,int>,bool>mp;
        bool done=1;
        while(m--)
        {
            int id,code;
           
            cin>>id>>code;
            if(mp[{id,code}])
                done=0;
            
            mp[{id,code}]=1;
            
           
            
        }
        if ( done == 1 ) cout << "Scenario #" << i << ": possible" << endl;
        else cout << "Scenario #" << i << ": impossible" << endl;
 
    }
    return 0;
}