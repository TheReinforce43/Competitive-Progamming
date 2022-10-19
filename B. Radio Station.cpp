#include<bits/stdc++.h>

using namespace std;

int main() {
    
    //pair<string,string> p,command;
    map<string,string>mp,command;
    int n,m;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        b+=";";
        //mp.insert({a,b});
        mp[b]=a;
    }
    
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        b.pop_back();
        //command.insert({a,b});
        command[b]=a;
      
        
        for(auto u:mp)
        {   
           if(u.second==b)
           {
           
               cout<<a<<" "<<b<<"; #"<<u.second<<endl;
               break;
           }
        }
    }
    
    
    
    
    
  /*  
    for(int i=0;i<n;i++)
        cin>>p.first[i]>>p.second[i];
    
    for(int i=0;i<m;i++)
    {
        cin>>command.first[i]>>command.second[i];
        
        for(int j=0;j<n;j++)
        {
            
            if(p.second[j]==command.second[i])
            { 
                cout<<command.first[i]<<" "<<command.second[i]<<" #"<<p.first[j]<<endl;
                break;
            }
        }
    }
    */    
    return 0;
}