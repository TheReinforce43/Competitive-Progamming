#include<bits/stdc++.h>
using namespace std;

const int mx=1e7+123;
typedef long long ll;
bitset<mx> is_prime;
vector<int> prime;
void Prime_gen()
{
    prime.push_back(2);
    is_prime[2]=1;
    
    for(int i=3;i<=mx;i+=2) is_prime[i]=1;
    
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=2*i) is_prime[j]=0;
        }
    }
    
    for(int i=3;i<=mx;i+=2)
    {
        if(is_prime[i]==1) prime.push_back(i);
    }
    
}

vector<ll> Factorrize(ll N)
{
    vector<ll> ans;
    
    for(auto p:prime )
    {
        if(1LL*p*p > N) break;
        
        if(N%p==0)
        {
            ans.push_back(p);
            while(N%p==0) N/=p;
        }
    }
    
    if(N>1) ans.push_back(N);
    
    return ans;
}

int main() {
    
    Prime_gen();
    
    ll N;
    int t,k;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        
        set<ll> cnt;
        cin>>k;
        while(k--)
        {
            
            cin>>N;
            vector<ll> ans=Factorrize(N);
            
            for(auto u:ans) cnt.insert(u);
        }
        cout<<"Case #"<<tc<<": "<<cnt.size()<<"\n";                     
        
        for(auto u:cnt) cout<<u<<"\n";
    }
    
    return 0;
}