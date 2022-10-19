#include<bits/stdc++.h>

using namespace std;

const int mx=1e6+123;

bitset<mx> is_prime;

vector<int> prime;

void Prime_gen()
{
    is_prime[2]=1;
    prime.push_back(2);
    
    for(int i=3;i<=mx;i+=2) is_prime[i]=1;
    
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=2*i)
                is_prime[j]=0;
        }
    }
    
    for(int i=3;i<=mx;i+=2)
    {
        if(is_prime[i]==1) prime.push_back(i);
    }
}

vector<int> Factorize(int N)
{
    vector<int> ans;
    for(auto p:prime)
    {
        if(p*p> N) break;
        
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
    int count=0;
    int N;
    cin>>N;
    
    if(N<=5) cout<<"0";
    else
    {
        for(int i=6;i<=N;i++)
        {
            vector<int> ans=Factorize(i);
            
            if(ans.size()==2) count++;
        }
        cout<<count;
    }
    
    cout<<endl;
    
    return 0;
}