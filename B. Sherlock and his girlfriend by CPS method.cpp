#include<bits/stdc++.h>

using namespace std;

const int mx=1e5+123;

bitset<mx> is_prime;

void prime_gen()
{
    is_prime[2]=1;
   for(int i=3;i<=mx;i+=2) is_prime[i]=1;
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=2*i)
                is_prime[j]=false;
        }

    }
}

int main() {
    
    prime_gen();
    int N;
    cin>>N;
    
    if(N==1 || N==2)
        cout<<"1"<<"\n";
    else 
    {
        cout<<"2\n";
    }
     for(int i=2;i<=N+1;i++)
    {
        if(is_prime[i]==1) cout<<"1 ";
        else cout<<"2 ";
    }
    cout<<"\n";
    return 0;
}