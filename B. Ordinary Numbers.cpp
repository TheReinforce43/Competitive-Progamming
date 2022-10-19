#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void Solution()
{
    ll N;
    cin>>N;
    int ans=0;

    for(ll pw=1;pw<=N;pw=pw*10+1)
    {
        for(int d=1;d<=9;d++)
        {
            if(d*pw<=N)
                ans++;
        }
    }
    cout<<ans<<endl;

}


int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        Solution();
    }

    return 0;
}
