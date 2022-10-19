#include<bits/stdc++.h>

using namespace std;


int main() {
    vector<int>v;
    int N;
    map<int,int>mp;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
       v.push_back(a);
       //cin>>v[i];
    }
    for(int i=0;i<N;i++)
    {
         if(mp.find(v[i])==mp.end())
             mp[v[i]]=1;
          else
              mp[v[i]]++;
    }

    int value=0;

    map<int,int>::iterator it=mp.begin();

    for(it;it!=mp.end();it++)
    {
        if(it->second >value)
            value=it->second;
    }
    cout<<value;



    return 0;
}
