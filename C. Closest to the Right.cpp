#include<bits/stdc++.h>

using namespace std;

int main() {
    
    vector<int>v;
    
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
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
            int temp=lower_bound(v.begin(),v.end(),key)-v.begin();
             cout<<temp+1<<"\n";
        }
           
        else if(v.back()<key)
            cout<<v.size()+1<<"\n";
            
        else if(lower_bound(v.begin(),v.end(),key)==v.end())
            cout<<"1\n";
        else 
        {
            int temp=lower_bound(v.begin(),v.end(),key)-v.begin();
            cout<<temp+1<<"\n";
        }
    }
    return 0;
}