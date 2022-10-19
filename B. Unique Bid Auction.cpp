#include<bits/stdc++.h>

using namespace  std;

int main() {
    int t,N;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>N;
        vector<int> v;
        map<int,int> cnt;
        
        for(int i=0;i<N;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            cnt[a]++;
        }
        
        for(auto u:cnt)
        {
            
            if(u.second==1) 
            {
                if(ans==0) ans=u.first;
                else
                {
                    if(ans>u.first) ans=u.first;
                }
            }    
        }
        
        if(ans==0) cout<<"-1\n";
        else 
        {
            int index=find(v.begin(),v.end(),ans) -v.begin();
            
            cout<<index+1<<"\n";
            
        }
        
    }
    return 0;
}