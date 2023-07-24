#include<bits/stdc++.h>
using namespace  std;

const int mx=1e7+123;

bitset<mx> is_prime;

vector<int> prime;

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
                is_prime[j]=0;           
        }
    }
    
    for(int i=3;i<=mx;i+=2) 
    {
        if(is_prime[i]==1) prime.push_back(i);
    }
}

void Solution()
{
    
}
int main() {
    
    long long int t,n;
    Prime_gen();
    cin>>t;
   
    
  
    return 0;
}