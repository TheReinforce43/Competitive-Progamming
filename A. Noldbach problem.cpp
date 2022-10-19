#include<bits/stdc++.h>
using namespace std;

const int mx=1e3+123;
bitset<mx>is_prime;
vector<int>prime;

void Prime_Gen()
{
    prime.push_back(2);;
    for(int i=3;i<=mx;i+=2) is_prime[i]=1;

    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=i) is_prime[j]=0;
        }
    }
    int j=1;
    for(int i=3;i<=mx;i+=2)
    {
        if(is_prime[i]==1) prime.push_back(i);
    }
}

bool  ans(int N,int k)
{
    int test=0;
    for(int i=0;i<prime.size();i++)
    {
        if(i!=prime.size())
        {

            int temp=prime[i]+prime[i+1]+1;
            if(temp<=N)
            {
                if(is_prime[temp]==1)
                    test++;
            }
        }
    }
    if(test>=k)
        return true;
    else return false;
}
int main()
{
    int N,k;
    cin>>N>>k;
    Prime_Gen();

    if(ans(N,k))
        cout<<"YES";
    else cout<<"NO";

    return 0;
}
