#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mx=90000000+123;
bitset<mx> is_prime;
int  prime[mx];

void Prime_gen()
{
        is_prime[2]=1;
        prime[1]=2;
        ll k=2;
        for(ll i=3;i<=mx;i+=2) is_prime[i]=1;
        for(ll i=3;i<=sqrt(mx);i+=2)
        {
                if(is_prime[i]==1)
                {
                   for(ll j=i*i;j<=mx;j+=2*i) is_prime[j]=0;
                }
        }
        for(ll i=3;i<=mx;i+=2)
        {
                if(is_prime[i]==1) prime[k++]=i;
        }
}

int main()
{
        Prime_gen();
        ll t,N;
        cin>>t;
        while(t--)
        {
                cin>>N;
                cout<<prime[N]<<endl;
        }
        return 0;
}
