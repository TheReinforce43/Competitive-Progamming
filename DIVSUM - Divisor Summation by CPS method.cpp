#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+123;
bitset<mx> is_prime;
vector<int> prime;

typedef long long ll;
void prime_gen()
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

ll SOD(ll N)
{
    ll ret=1;
    for(auto p:prime)
    {
        if(1LL*p*p > N) break;

        if(N%p==0)
        {
            ll PowP=1;
            ll totalSum=1;
            while(N%p==0)
            {
                PowP*=p;
                totalSum+=PowP;
                N/=p;
            }
            ret*=totalSum;
        }
    }
    if(N>1) ret*=(1+N);

    return ret;
}

int main()
{
    prime_gen();
    int t;
    ll N,ans;
    cin>>t;
    while(t--)
    {
        cin>>N;
        ans=SOD(N)-N;
        cout<<ans<<endl;
    }
    return 0;
}
