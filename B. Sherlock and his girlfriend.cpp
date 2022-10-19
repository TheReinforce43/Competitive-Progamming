#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+124;
vector<int> divs[mx];
bitset<mx>is_prime;
vector<int>prime;
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
            {
                is_prime[j]=0;            
            }        
        }
    }
    
    for(int i=3;i<=mx;i+=2)
    {
        if(is_prime[i]==1) prime.push_back(i);
    }
}
int main() {
    
    Prime_gen();
    vector<int>ans;
    int N;
    cin>>N;
    int count=2;

    if(N==1){
        cout<<"1"<<"\n"<<"1";
    }
    else
    {
        for(int i=2;i<=N+1;i++)
        {
            if(binary_search(prime.begin(),prime.end(),i)==true) ans.push_back(1);
            else ans.push_back(2);
           
        }
        
        if(N==2) cout<<"1\n";
        else
            cout<<count<<"\n";
        for(auto u:ans) cout<<u<<" ";
    }
    
    cout<<"\n";
    
    
    return 0;
}