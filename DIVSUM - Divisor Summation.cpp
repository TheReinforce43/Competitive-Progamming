#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mx=1e8+123;;
vector<ll>divs[mx];
void NOD()
{
    for(ll i=1;i<=mx;i++)
    {
        for(ll j=i;j<=mx;j+=i)
            divs[j].push_back(i);
    }
}

int main()
{
    NOD();
    ll t,N;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        cin>>N;
        for(auto u:divs[N])
            ans+=u;
        ans-=N;
        cout<<ans<<"\n";
    }
    return 0;
}
