#include<bits/stdc++.h>

using namespace std;

const int mx=1e7+123;

bitset<mx> is_prime;

int ans[mx];

void Prime_gen()
{
    is_prime[2]=1;
    
    for(int i=3;i<=mx;i+=2) is_prime[i]=1;
    
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=2*i)
                is_prime[j]=0;
        }
    }
}

void Solution()
{
    int d;
    
    for(int x=1;x<=3200;x++)
    {
        for(int y=1;y<=60;y++)
        {
            d= (x*x) + pow(y,4);
            if(d>mx) continue;
            
            if(is_prime[d]==1) ans[d]=1;
        }
    }
    
    for(int i=1;i<=mx;i++) ans[i]+=ans[i-1];
}


int main() {
    Prime_gen();
    Solution();
    int t,n;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
