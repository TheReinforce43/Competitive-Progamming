#include<bits/stdc++.h>

using namespace std;

int main() {
    
    vector<int> v;
    
    int n,k;
    cin>>n>>k;
    
    for(int i=1;i<=n;i++) 
    {
        int a;
        cin>>a;
        v.push_back(a);
        
    }
    while(k--)
    {
        int key;
        cin>>key;
        
        if(binary_search(v.begin(),v.end(),key)==true)
        {
            int temp=upper_bound(v.begin(),v.end(),key)-v.begin();
            cout<<temp<<"\n";
        }
        else if(v.back()<key)
            cout<<v.size()<<"\n";
            
        else if(lower_bound(v.begin(),v.end(),key)==v.end())
        {
            cout<<"0\n";
        }
        else
        {
            cout<<lower_bound(v.begin(),v.end(),key)-v.begin()<<"\n";
        }
    }
    
    return 0;
}