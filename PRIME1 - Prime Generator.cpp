#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mx=32000;
bitset<mx>is_prime;
vector<ll>prime;
vector<ll>segment_prime;

 void  Prime_gen()
 {
        is_prime[2]=1;
        prime.push_back(2);
        for(ll i=3;i<=mx;i+=2) is_prime[i]=1;

        for(ll i=3;i<=mx;i+=2)
        {
                if(is_prime[i]==1)
                {
                        for(ll j=i*i;j<=mx;j+=2*i) is_prime[j]=0;
                }
        }
        for(ll i=3;i<=mx;i+=2)
        {
                if(is_prime[i]==1) prime.push_back(i);
        }
 }
void Segment_sieve(ll l,ll r)
{
        bool seg_is_prime[r-l+1];
        ll range=r-l+1;
        for(ll i=0;i<=range;i++) seg_is_prime[i]=1;
        if(l==1) seg_is_prime[0]=0;
        for(ll i=0;prime[i]*prime[i]<=r;i++)
        {
                ll curr=prime[i];
                ll base=(l/curr)*curr;
                if(base<l)
                {
                        base+=curr;

                }
                for(ll j=base;j<=r;j+=curr) seg_is_prime[j-l]=0;
                if(base==curr) seg_is_prime[base-l]=1;
        }
        for(ll i=0;i<=(r-l);i++)
        {
            if(seg_is_prime[i]==1) cout<<l+i<<"\n";
        }
}

 int main()
 {
        Prime_gen();

        ll t,l,r;
       cin>>t;
        while(t--)
        {
                cin>>l>>r;
                Segment_sieve(l,r);

                cout<<"\n";

        }
         return 0;
 }
