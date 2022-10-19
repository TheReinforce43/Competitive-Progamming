#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    
    optimize()
    int N,M;
    cin>>N;
    
    //long long price;
    //int a,b,c;
    bool F;
    vector<int> price, a,b;
    
    map<int, pair<int,int> > mp;
    
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        price.push_back(a);
    }
    
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        b.push_back(a);
    }
    
    for(int i=0;i<N;i++)
    {
        mp[price[i]]=make_pair(a[i],b[i]);
    }
    
    //for(auto u:mp) cout<<u.first<<" "<<u.second.first<<" "<<u.second.second<<" \n";
     
    priority_queue<int> pq;
    cin>>M;
    for(int i=0;i<M;i++)
    {
        int c;
        F=0;
        cin>>c;
        if(mp.empty()) cout<<"-1 ";
        
        else
        {
            for(auto u: mp)
            {
                if(u.second.first==c || u.second.second==c)
                {
                    pq.push(-u.first);
                    F=1;
                }
                    
            }
            if(F==1)
            {
                cout<<-pq.top()<<" ";
                
                mp.erase(-(pq.top()));
                
                while(!pq.empty()) pq.pop();   
            }
            else cout<<"-1 ";
            
        }
        
    }
    

    return 0;
}