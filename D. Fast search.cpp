#include<bits/stdc++.h>
using namespace std;

int main() {
    
   
    
    vector<int>st ;
    int n,k,l,r;
    
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
     
        st.push_back(a);
    }
    sort(st.begin(),st.end());
    cin>>k;
    while(k--)
    {
        cin>>l>>r;
        
        int a=lower_bound(st.begin(),st.end(),l)-st.begin();
        int b=upper_bound(st.begin(),st.end(),r)-st.begin();
        
        cout<<b-a<<"\n";
        
      
    }
    return 0;
}