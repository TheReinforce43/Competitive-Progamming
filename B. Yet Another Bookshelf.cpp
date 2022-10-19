#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,N;
    cin>>t;
    while(t--)
    {
        cin>>N;
        vector<int>v(N);
        
        for(auto &it:v) cin>>it;
        
        while(v.back()==0) v.pop_back();
        
        reverse(v.begin(),v.end());
        
        while(v.back()==0) v.pop_back();
        
        cout<<count(v.begin(),v.end(),0)<<"\n";
        
    }
    return 0;
}