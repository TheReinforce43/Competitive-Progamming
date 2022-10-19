#include<bits/stdc++.h>

using namespace std;

int main() {
    
    set<int> x,y;
    
    int p,q,N;
    cin>>N;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int key;
        cin>>key;
        if(key>0)
            x.insert(key);
    }
    
    cin>>q;
    for(int i=0;i<q;i++)
    {
        
        int key;
        cin>>key;
        if(key>0)
            y.insert(key);
    }
    
    for(auto u:y)
        x.emplace(u);
    if(x.size()==N)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}