#include<bits/stdc++.h>
using namespace std;

const int mx=3e3+123;

bitset<mx> is_prime;

vector<int> prime;

vector<int> Prime_Factors[mx];

void Prime_gen()
{
    is_prime[2]=1;
    prime.push_back(2);
    
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


void Factorization()
{
    for(auto p:prime)
    {
        for(int i=p;i<=mx;i+=p)
            Prime_Factors[i].push_back(p);
    }
}

int main() {
    Prime_gen();
    Factorization();
    int N;
    cin>>N;
    int  count=0;
    for(int i=1;i<=N;i++)
    {
        if(Prime_Factors[i].size()==2) count++;
       
    }
    
    cout<<count;
    return 0;
}